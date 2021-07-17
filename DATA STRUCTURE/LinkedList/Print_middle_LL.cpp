#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};



class LL{
	node *head= NULL;
	public:
		int count=0;
		void create();
		void print();
		void print_middle();			
};

void LL::create(){
	node *temp,*p;
	
	temp = new node();
	cout<<"enter the data:";
	cin>>temp->data;
	p = head;
	if(head == NULL){
		head = temp;
		return ;
	}
	else{
		while(p->next != NULL){
		p = p->next;
		}
		p->next = temp;
	}
	count++;
}

void LL::print(){
	node *p;
	p = head;
	if(head == NULL)
		return;
	while(p!=NULL){
		cout<<p->data<<"\t";
		p = p->next;
	}
	cout<<"\n";
}

void LL::print_middle(){
	/*
	take ine variable to count the number of node
	in every create()/insertion() inserace the count by one
	in every deletion() decrace the count by one
	find the middle value by count/2
	and iterate till that piont
	*/
	cout<<"the middle element is:";
	node *p;
	p = head;
	int tra = count/2;
	while(tra > 0){
		p = p->next;
		tra--;
	}
	cout<<p->data;
	
/*Using a slow and fast pointer: we will iterate slow pointer by one 
 fast pointer by two 
so when fast pointer reaches NULL our slow pointer will reach middle of list.*/

//	node *slow,*fast;
//	slow = head;
//	fast = head->next;
//	
//	while(fast!= NULL && fast->next!=NULL){
//		slow = slow->next;
//		fast = fast->next->next;
//		
//	}
//	cout<<slow->data;
}
int main(){
	
	LL l;
	int num;
	cout<<"enter the number of element for ll";
	cin>>num;
	for(int i=0;i<num;i++){
		l.create();
	}
	
	l.print();
	l.print_middle();
	
	return 0;
}
