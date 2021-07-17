#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
			node(int data){
				this->data = data;
				this->next = NULL;
			}
};
 node *head;
 void remove_loop(node *slow);
 int detect_loop(){
 	
 	node *slow = head;
 	node *fast = head;
 	
 	if(head == NULL)
 		return 0;
 	else{
 		
 		while(fast!= NULL && fast->next!= NULL){
 		slow = slow->next;
 		fast = fast->next->next;
 	
	 		if(slow == fast ){
//	 			cout<<slow;
	 			remove_loop(slow);
	 			return 1;
		 	}
 			
	 	}
	 }
	 return 0;	
 	
	  
 }
 
void remove_loop(node *slow){
	node *ptr1 = head;
	node *ptr2 = slow;
	
	while(ptr1->next != ptr2->next){
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	ptr2->next = NULL;
	
} 
 int main(){
 	
 	node *h1,*h2,*h3,*h4,*h5;
 	
 	h1 = new node(1);
 	h2 = new node(2);
	h3 = new node(3);
	h4 = new node(4);
	h5 = new node(5);
	
 	h1->data = 1;
 	h1->next = h2;
 	
 	head = h1;
 	h2->next = h3;
 	h3->next = h4;
 	h4->next = h5;
 	h5->next = h3;
 	
 	cout<<detect_loop()<<"\t";
 	
 	
 	node *p;
	p = head;
	if(head == NULL)
		;
	while(p!=NULL){
		cout<<p->data<<"\t";
		p = p->next;
	} 
	
	return 0;
	
	
 	
 }
