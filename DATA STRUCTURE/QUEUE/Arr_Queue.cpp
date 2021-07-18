//queuq using array
#include<iostream>
#define max 6
using namespace std;

class queue{
	int arr[max];
	int F,R; //front,rear
	public:
		queue(){
			F = R = -1;
		}
		int empty();
		int full();
		void enqueue(int data);
		int dequeue();
		void print();
};
int queue::empty(){
	if(R == -1)
		return 1;
	return 0;
}
int queue::full(){
	if(R == max-1 )
		return 1;
	return 0;
}
void queue::enqueue(int data){
	if(full()){
		cout<<"queue is overflow"<<"\n";
		return;
	}else if(empty()){
		F = R = 0;
		arr[R] = data;
		cout<<"elenemt "<<data<<" is inserted in queue"<<"\n";
	}else {
		arr[++R] = data;
		cout<<"elenemt "<<data<<" is inserted in queue"<<"\n";
	}
}
int queue::dequeue(){
	if(empty()){
		cout<<"queue is underflow"<<"\n";
	}else{
		return arr[F++];
	}
}
void queue::print(){
	cout<<"the value of queue are"<<"\n";
	for(int i = F;i<=R;i++)
		cout<<arr[i]<<"\t";
	cout<<"\n";
}
int main(){
	
	queue q;
	
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7); // this will give errer for overflow
	
	q.print();
	
	cout<<"dequeue 3 value"<<"\n";
	cout<<q.dequeue()<<"\n";
	cout<<q.dequeue()<<"\n";
	cout<<q.dequeue()<<"\n";
	cout<<"after dequeue "<<"\n";
	q.print();
	
	return 0;	
}
