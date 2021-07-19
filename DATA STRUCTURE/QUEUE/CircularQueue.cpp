//circular queue

#include<iostream>
#define max 5
using namespace std;

class Cqueue{
	int arr[max];
	int f,r;
	public:
	Cqueue(){
		f = r = -1; 
	}
	int empty();
	int full();
	void enqueue(int value);
	int dequeue();
	void print();
};

int Cqueue::empty(){
	if(r == -1)
		return 1;
	return 0;
}
int Cqueue::full(){
	if(r == max-1 && f ==0 )
		return 1;
	return 0;
}
void Cqueue::enqueue(int value){
	if(full()){
		cout<<"queue is full"<<"\n";
		return ;
	}else if(empty()){
		f = r = 0;
		arr[r] = value;
		cout<<"element "<<value<<" is inserted in queue"<<"\n";
	}else{
		r = (r+1)%max;
		arr[r] = value;
		cout<<"element "<<value<<" is inserted in queue"<<"\n";
	}
}
int Cqueue::dequeue(){
	int x;
	if(empty()){
		cout<<"queue is empty"<<"\n";
		return -1;
	}else{
		x = arr[f];
		
		if(f == r) //last element;
			f = r = -1;
		else
			f = (f+1)%max;
	}
	return x;
	
}
void Cqueue::print(){
	cout<<"the value of queue are"<<"\n";
	if(empty()){
		cout<<"queue is empty"<<"\n";
		return;	
	}
	
	if(r >= f){
		for(int i = f ;i <= r;i++)
			cout<<arr[i]<<"\t";
	}else{
		for(int i = f;i < max;i++)
			cout<<arr[i]<<"\t";
			
		for(int i = 0 ;i <= r;i++)
			cout<<arr[i]<<"\t";
	}
	cout<<"\n";
}
	
	

int main(){
	
	Cqueue q;
	
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	
	
	q.print();
	
	cout<<"dequeue 3 value"<<"\n";
	cout<<q.dequeue()<<"\n";
	cout<<q.dequeue()<<"\n";
	cout<<q.dequeue()<<"\n";
	cout<<"after dequeue "<<"\n";
	q.print();
	
	cout<<"add 2 element"<<"\n";
	q.enqueue(6);
	q.enqueue(7);
	
	q.print();
	
	
	
	return 0;	
}
