#include<bits/stdc++.h> 
#include<stack>
#include<cstring>

// it will include all tha file (use it during competitive programming only)
//othervise use only what you need
using namespace std;
class inToPost{
	
	public:
		int priority(char);
		int w_sapce(char);
		string convert(string infix);
		int evaluation(string postfix);
		
};
int inToPost::priority(char symbol){
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
int inToPost::w_sapce(char symbol){
	if(isspace(symbol))
		return 1;
	return 0;
}
string inToPost::convert(string infix){
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

int inToPost::evaluation(string postfix){
	stack<int> si;
	char symbol;
	int value,a,b;
	for(int i=0;i<postfix.length();i++){
		symbol = postfix[i];
		
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
	inToPost ip;
	string infix,postfix;
	int result;
	cout<<"enter the valid infix string "<<"\n";
	cin>>infix;
	
	postfix = ip.convert(infix);
	cout<<"the postfix conversion of the given string is: ";
	cout<<postfix;
	
	result = ip.evaluation(postfix);
	cout<<"\nthe evaluation of postfix expression is: ";
	cout<<result;
	
	return 0;
}
