/*
Paranthisis checking
In any language program mostly syntax error occurs due to unbalancing delimiter such as
(),{},[]. Write C++ program using stack to check whether given expression is well
parenthesized or not.*/

#include<iostream>
#include<cstring>
using namespace std;

class Node{
	public:
		char data;
		Node *next;
};


class stack{
	public:
 	Node *top = NULL;
 	int isempty();
 	char topelement();
 	void push(char value);
 	void pop();
 	
};
int stack::isempty(){
	return top==NULL;
}
char stack::topelement(){
	return top->data;
}
void stack::push(char value){
	Node *temp = new Node();
	 temp->data = value;
	 temp->next = top;
	 top= temp;
}

void stack::pop(){
	Node *temp = top;
	
	top = top->next;
	delete temp;

}
class P_checking{
	stack s;
	char x;
	public:
	bool paranthisis_checking(string exp){
		for(int i = 0; i<exp.length(); i++){
			if(exp[i]=='('||exp[i]=='['||exp[i]=='{'){
				s.push(exp[i]);
				continue;
			}
			if(s.isempty()){
				return false;
			}
			switch(exp[i]){
				case ')':
					x = s.topelement();
					s.pop();
					if(x=='['||x=='{')
						return false;
					break;
					
				case ']':
					x = s.topelement();
					s.pop();
					if(x=='('||x=='{')
						return false;
					break;
					
				case '}':
					x = s.topelement();
					s.pop();
					if(x=='['||x=='(')
						return false;
					break;
								
			}
		}
		
		return s.isempty();
	}
	
};

int main(){
	
	string expr;
cin>>expr;
	
	P_checking c;
	cout<<c.paranthisis_checking(expr);
	if(c.paranthisis_checking(expr))
		cout<<"valid";
	else
		cout<<"invalid";

//stack s;
//s.push('a');
//
//s.display();
	
	return 0;
	
}
