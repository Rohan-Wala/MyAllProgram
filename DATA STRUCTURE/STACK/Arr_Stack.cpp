#include<iostream>
using namespace std;
#define max 15
class stack{
	public:
		int arr[max];
		int top;
		
		
	stack(){
		top = -1;
	}
	
	void push(int data);
	int pop();
	int isfull();
	int isempty();
	int topelement();
};
int  stack::isempty(){
	if(top == -1)
		return 1;
	return 0;
}
int stack::isfull(){
	if(top == max-1)
		return 1;
	return 0;
}
void stack::push(int data){
	if(isfull()==1){
		cout<<"stack is full"<<"\n";	
	}
	else{
	top++;
	arr[top] = data;
	cout<<data<<" is pushed into stack"<<"\n";
	}
	
}
int stack::pop(){
	if(isempty()==1){
		cout<<"stack is empty"<<"\n";
		
	}
	else{
	return arr[top--];
	}
	
}
int stack::topelement(){
	return arr[top];
}

int main(){
	stack s;
	int x;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<s.topelement()<<"\n";
	x = s.pop();
	cout<<x <<" is poped"<<"\n";
	cout<<s.topelement()<<"\n";
	x = s.pop();
	cout<<x <<" is poped"<<"\n";
	cout<<s.topelement()<<"\n";
}




























