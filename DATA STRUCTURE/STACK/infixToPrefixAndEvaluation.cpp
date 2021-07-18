#include<iostream>
#include<stack>
#include<cstring>
#include<algorithm>

/*
step to convert infix to prefix
1)reverse the infix expression
2) make every '(' as ')' and ')' as '('
3)apply infix to postfix conversion
4) revers the postfix and resultant expression will be in prefix

step for evaluation 
1)start from last char till 0th char in prefix expression
2)follow the same step as postfix evaluation

*/

using namespace std;
class inToPre{
	
	public:
		int priority(char);
		int w_sapce(char);
		string intopost(string infix);
		string convert(string postfix);
		int evaluation(string prefix);
		
};
int inToPre::priority(char symbol){
	switch(symbol){
		case '*':
		case '/':
				return 2;
		case '+':
		case '-':
				return 1;
		case '(':
		case '[':
		case '{':
			return 0;
	}
}
int inToPre::w_sapce(char symbol){
	if(isspace(symbol))
		return 1;
	return 0;
}

string inToPre::intopost(string infix){
	stack<char> s;
	char postfix[100],symbol;
	int p=0;
	for(int i=0;i<infix.length();i++){
		symbol = infix[i];
		if(!w_sapce(symbol)){
			
			switch(symbol){
				case '(':
				case '[':
				case '{':
					s.push(symbol);
					break;
				case ')':
					while(s.top() != '(')
					{
						postfix[p++] = s.top();
						s.pop();
					}
					s.pop();
					break;
				case ']':
					while(s.top() != '[')
					{
						postfix[p++] = s.top();
						s.pop();
					}
					s.pop();
					break;
				case '}':
					while(s.top() != '{')
					{
						postfix[p++] = s.top();
						s.pop();
					}
					s.pop();
					break;
				case '+':
				case '-':
				case '*':
				case '/':
					while(!s.empty() && priority(symbol) <= priority(s.top()))
						{
							postfix[p++] = s.top();
							s.pop();
						}
						s.push(symbol);	
				break;
				
				default:
					postfix[p++] = symbol;
					
			}
		
		}	
	}
	while(!s.empty())
			{
				postfix[p++] = s.top();
				s.pop();
			}
		postfix[p] = '\0';
		
		
	return postfix;	
	
}

string inToPre::convert(string infix){
	
	char pre[30],temp;
	string prefix;
	int j,i;
		
	//revers 
	for(i=infix.length()-1,j=0; i>=0 ;i--,j++){
		pre[j] = infix[i];
	}
		pre[j] = '\0';
	//revers the direction of breackets
	for(i=0; pre[i] != '\0' ;i++){
			
		if(pre[i] == '(')
			pre[i] = ')';
		else if(pre[i] == ')')
			pre[i] = '(';
		else if(pre[i] == '[')
			pre[i] = ']';
		else if(pre[i] == ']')
			pre[i] = '[';
		else if(pre[i] == '{')
			pre[i] = '}';
		else if(pre[i] == '}')
			pre[i] = '{';
	}
	
	//converting to postfix
	prefix = intopost(pre);
	
	
	//revers again
	
//	for(i=0,j=prefix.length()-1;i<j;i++,j--){
//		temp = prefix[i];
//		prefix[i] = prefix[j];
//		prefix[j] = temp;
//	}
	
	//or
	reverse(prefix.begin(), prefix.end()); 
	// There is a direct function in “algorithm” header file
	
	return prefix;
	
}

int inToPre::evaluation(string prefix){
//	reversing
	reverse(prefix.begin(), prefix.end()); 
	
	
	stack<int> si;
	char symbol;
	int value,a,b;
	for(int i=0;i<prefix.length();i++){
		symbol = prefix[i];
		
//		if(symbol >= 'a' && symbol <= 'z' || symbol >= 'A' && symbol <= 'Z' ){
		if(isalpha(symbol)){
		
			cout<<"\nenter the value for "<<symbol<<":";
			cin>>value;
			si.push(value);
		}
		if(symbol >=48 && symbol <= 57){
			int x = (int)symbol-48;		//or can be written as "int x = symbol-'0'"
			si.push(x);
		}
		else{
			switch(symbol){
				case '+':
					a =	si.top();
					si.pop();
					b = si.top();
					si.pop();
					si.push(b+a); 
					break;
				
				case '-':
					a =	si.top();
					si.pop();
					b = si.top();
					si.pop();
					si.push(b-a); 
					break;
				
				case '*':
					a =	si.top();
					si.pop();
					b = si.top();
					si.pop();
					si.push(b*a); 
					break;
				
				case '/':
					a =	si.top();
					si.pop();
					b = si.top();
					si.pop();
					si.push(b/a); 
					break;
			}
		}
	}
	
	return si.top();
}
int main(){
	inToPre ip;
	string infix,prefix;
	int result;
	cout<<"enter the valid infix string "<<"\n";
	cin>>infix;
	
	prefix = ip.convert(infix);
	cout<<"the prefix conversion of the given string is: ";
	cout<<prefix;
	
	result = ip.evaluation(prefix);
	cout<<"\nthe evaluation of prefix expression is: ";
	cout<<result;
	
	return 0;
}
