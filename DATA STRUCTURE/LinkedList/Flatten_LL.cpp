/*
Given a Linked List of size N, where every node represents a sub-linked-list and contains
 two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining 
the sorted order. 
Note: The flattened list will be printed using the bottom pointer instead of next pointer.

Input:
5 -> 10 -> 19 -> 28
|     |     |     | 
7     20    22   35
|           |     | 
8          50    40
|                 | 
30               45
Output:  5-> 7-> 8- > 10 -> 19-> 20->
22-> 28-> 30-> 35-> 40-> 45-> 50.
Explanation:
The resultant linked lists has every 
node in a single level.
(Note: | represents the bottom pointer.)

Input:
5 -> 10 -> 19 -> 28
|          |                
7          22   
|          |                 
8          50 
|                           
30              
Output: 5->7->8->10->19->20->22->30->50
Explanation:
The resultant linked lists has every
node in a single level.

(Note: | represents the bottom pointer.)
*/

#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	node *bottem;
};
node *head = NULL;

class DLL{
	public:
		void insert();
		void print();
		node *insertatend(node *shead);
		node *merge(node *head1,node *head2);
};

void DLL::insert(){
	node *temp = NULL;
	node *p = NULL;
	int num2;
	cout << "Enter the number of node for sublinklist";
    	cin >> num2;
    	for(int j=0;j<num2;j++){
   			temp  = insertatend(temp);
		}

	if (head == NULL){
		head = temp;
	}else{
		p = head;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = temp;		
	}
		
		
		
	

}
node *DLL::insertatend(node *shead){
		node *temp = new node();
		node *p ;
    cout << "Enter the value: ";
    cin>>temp->data;
    temp->next =temp->bottem = NULL;

    
    p = shead;
    if(shead==NULL) {
        shead = temp;
        return shead;
    }
     if(p!=NULL) {
		while(p->bottem !=NULL) {
            p = p->bottem;
        }
        p->bottem = temp;
    }
    
    return shead;
} 

node *DLL::merge(node *head1,node *head2){
	node *h1,*h2;
	h1 = head1;
	h2 = head2;
	
	while(h1 != NULL && h2 != NULL)
}


void DLL::print(){
	node *p,*b;
	cout<<"the values of LL are"<<"\n";
	if(head==NULL)
	cout<<"LL is empty";
	p=head;
	while(p != NULL){
		b = p;
		while(b !=NULL) {
			cout << b->data <<"-> ";
        	b = b->bottem;
        }
        cout<<"\n";
        p = p->next;
	}
}
int main() { 
	DLL dl;
	int num1,num2;
    cout << "Enter the number of sublinked list : " <<"\n";
    cin >> num1;
	for(int i=0;i<num1;i++){
			dl.insert();	
				
	}
	dl.print();
}



