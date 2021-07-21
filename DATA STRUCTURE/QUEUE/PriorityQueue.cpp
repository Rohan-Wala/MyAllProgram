//priority queue
#include<iostream>
#define max 10
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
		cout<<"queue is full"<<"\n";
		return;
	}else{
		R++;
		if(R== 0){
			F++;
			arr[R] = data;
		}else{
			int i;
			for(i = R-1; i>=0 && data< arr[i];i--)
				arr[i+1] = arr[i];
			arr[i+1] = data;
		}
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
	q.enqueue(4);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(0);
	q.enqueue(9);
	q.enqueue(0); // this will give errer for overflow
//	
	q.print();
	
	cout<<"dequeue 3 value"<<"\n";
	cout<<q.dequeue()<<"\n";
	cout<<q.dequeue()<<"\n";
	cout<<q.dequeue()<<"\n";
	cout<<"after dequeue "<<"\n";
	q.print();
	
	return 0;	
}
