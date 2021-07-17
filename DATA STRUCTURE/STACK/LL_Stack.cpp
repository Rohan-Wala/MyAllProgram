#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};


class stack{
	public:
		Node *top;
		void push(int data){
	Node *temp;
	temp= new Node();
	
	temp->data = data;
	temp->next = top;
	top = temp;
}

int isempty(){
	return top==NULL;
}

void  pop(){
	Node *temp;
	
	if(isempty()){
		cout<<"stack is empty";
		exit(1);
	}else{
		temp = top;
		top = top->next;
		temp->next=NULL;
		delete(temp);
		
	}
}

int topelement(){
	if(!isempty())
		return top->data;
	else
		exit(1);
}

void display(){
	Node *temp;
	if(isempty()){
		cout<<"stack is empty";
		exit(1);
	}else{
		temp = top;
		while(temp!=NULL){
			cout<<temp->data;
			temp=temp->next;
		}
	}
}
};


int main(){
	stack s;
	cout<<s.isempty();
	s.push(1);
	s.push(2);
	s.push(3);
	
	s.display();
	
	s.pop();
	cout<<s.topelement();
//	s.display();	
	return 0;
}
