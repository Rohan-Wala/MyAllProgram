// queue using linked list
#include<iostream>
using namespace std;
class node {
	public:
		int data;
		node *next;
};

class queue{
	node *f , *r;
	public:
		queue(){
			f = r = NULL; 
		}
	
	int empty();
	void enqueue(int value);
	int dequeue();
	void print();
};
int queue::empty(){
	if(r == NULL)
		return 1;
	return 0;
}
void queue::enqueue(int value){
	node *temp = new node();
	temp->data = value;
	temp->next = NULL;
	if(empty()){
		f = r =  temp;
		cout<<"elenemt "<<value<<" is inserted in queue"<<"\n";
	}else{
		r->next = temp;
		r = r->next;
		cout<<"elenemt "<<value<<" is inserted in queue"<<"\n";
	}
}

int queue::dequeue(){
	node *temp;
	int x;
	
	if(f == NULL){
		cout<<"queue is empty"<<"\n";
		return -1;
	}
	
	else{
	temp = f;
	x = temp->data;
	
	if(f == r)//last element
		f = r = NULL;
	else
		f = f->next;	
	
	delete temp;
	return x;
	}
}

void queue::print(){
	node *p = f;
	cout<<"the value of queue are"<<"\n";
	while(p != r->next){
		cout<<p->data<<"\t";
		p =p->next;
	} 
	cout<<"\n";
}

int main(){
	
	queue q;
	
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);

	
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

