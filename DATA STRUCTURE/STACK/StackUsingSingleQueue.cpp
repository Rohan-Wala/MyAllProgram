//stack using single queue
/*
This method makes sure that newly entered element is always at the front of ‘q1’,
 so that pop operation just dequeues from ‘q1’.

1)push(s, x) operation’s step are described below:
	Enqueue x to q1
	One by one dequeue everything from q1 and enqueue to q1 till it reach x.
2)pop(s) operation’s function are described below:
	Dequeue an item from q1 and return it.
*/

#include<iostream>
#include<queue>
#define max 30
using namespace std;
class stack{
	queue<int> q1;
	int arr[max];
	public:
		void push(int value);
		void pop();
		int top();
		void print();
};
void stack::push(int value){
	
	q1.push(value);
	
	while(q1.front() != value){
		q1.push(q1.front());
		q1.pop();
	}
	 	
	cout<<"element "<<value<<" is push into a stack"<<"\n";
}

void  stack::pop(){
	if(!q1.empty()){
		q1.pop();
	}else
		return ;
}

int stack::top(){
	int x;
	if(!q1.empty()){
		x = q1.front();
	}else
		return -1;
}
void stack::print()
{
    queue<int> g = q1;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
int main(){
	stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
  
  	s.print();
  	
	cout<<"pop 3 element"<<"\n";
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
  	s.pop();
    cout<<"add one element"<<"\n";
    s.push(6);
    
    cout<<"the top element is"<<"\n";
    cout<<s.top()<<"\n";
    
	s.print();
	
	return 0;
}
