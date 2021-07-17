#include<iostream>
#include<cstring>
#define max 30
using namespace std;
char arr[max];
int top;
class stack{
	
	public:
		
		
		stack(){
			top = -1;
		}
		int isempty();
		int isfull();
		void push(char data);
		char pop();
		char topelement();
};
class InToPost{
	stack s;
	string infix;
	char postfix[100];
	
	public:
		int priority(char symbol);
		int whitespace(char symbol);
		string conversion(string infix);
		
		
		
};
//stack
int stack::isempty(){
	if(top == -1)
		return 1;
	return 0;
}
int stack::isfull(){
	if(top == max-1)
		return 1;
	return 0;
}
void stack::push(char data){
	if(isfull() == 1){
		cout<<"stack is full";
	}
	else{
		
		top++;
		arr[top] = data;
		
		
	}
}
char stack::pop(){
	if(isempty() == 1){
		cout<<"stack is empty";
		
	}
	else
		return arr[top--];
		
}
char stack::topelement(){
	return arr[top];
}
//InToPost
int InToPost::priority(char symbol){
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
int InToPost::whitespace(char symbol){
	if(isspace(symbol))
		return 1;
	return 0;
}

string InToPost::conversion(string infix){
	char symbol,next;
	int p;
	for(int i=0;i<infix.length();i++){
		symbol = infix[i];
		if(!whitespace(symbol)){
			switch(symbol){
				case '(':
				case '[':
				case '{':
					s.push(symbol);
					break;
				case ')':
					while((next = s.pop()) != '(')
						postfix[p++] = next;
					break;
				case ']':
					while((next = s.pop()) != '[')
						postfix[p++] = next;
					break;
				case '}':
					while((next = s.pop()) != '}')
						postfix[p++] = next;
					break;
				case '*':
				case '+':
				case '-':
				case '/':
					while(!s.isempty() && priority(symbol) <= priority(s.topelement()))
						postfix[p++] = s.pop();
					s.push(symbol);
					break;
				default:
					s.push(symbol);
					
						
			}
		}
	}
	while(!s.isempty())
		postfix[p++] = s.pop();
	postfix[p] = '\0';
	
	return postfix;
}



int main(){
	InToPost ip;
	string infix,postfix;
	cout<<"enter the valid infix string: ";
	cin>>infix;
	postfix = ip.conversion(infix);
	cout<<"the postfix conversion of the given string is: ";
	cout<<postfix;
	
	
	
return 0;
}
