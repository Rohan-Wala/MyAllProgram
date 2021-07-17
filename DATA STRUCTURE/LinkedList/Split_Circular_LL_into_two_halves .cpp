#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
Node *head = NULL;
class CLL{
	public:
		void insert();
		void print(Node *head);
		void SplitCLLIntoTwoHalves(Node *head, Node **head1, Node **head2); 
		
		
};
void CLL::insert(){
	Node *temp = new Node();
    cout << "Enter the value: ";
    cin>>temp->data;
    temp->next = NULL;

    Node *p = new Node();
    p = head;
    
    if(head==NULL) {
        head = temp;
        head->next=head;
        return ;
        
    }
   
		while(p->next!=head) {
            p = p->next;
        }
        
		p->next = temp;
		temp->next=head;
        
    
    
}

void CLL::print(Node *head){
	cout<<"the values of LL are"<<"\n";
	if(head==NULL)
	cout<<"LL is empty";
	Node *p;
	p=head;
	while(p->next!=head) {
		cout << p->data << endl;
        p = p->next;
        }
        cout<<p->data<<"\n";
}

void CLL::SplitCLLIntoTwoHalves(Node *head, Node **head1, Node **head2){
	/*
	Given a Cirular Linked List of size N, split it into two halves circular lists.
	If there are odd number of nodes in the given circular linked list then out of the 
	resulting two halved lists, first list should have one node more than the second list. 
	The resultant lists should also be circular lists and not linear lists.
	
	Input:
	Circular LinkedList: 2->6->1->5
	Output:
	2 6
	1 5
	
	*/
	int count=0,mid;
	
	Node *p = head;
	Node *q = head;
	*head1 = head;
	
	while(p->next != head){
	
		count++;
		p = p->next;
	}
	mid = count /2;	
	
	while(mid>0){
		q = q->next;
		mid--;
	}
	*head2 = q->next;
	q->next = *head1;
	
	q = *head2;
	while(q->next != head){
		q  = q->next;
	}
	q->next = *head2;
}

int main() {
    int num;
//    Node *head = NULL;
Node *head1,*head2;

CLL cl;
    cout << "Enter the number to be entered in the linked List: " <<"\n";
    cin >> num;

    for(int i=0;i<num;i++) {
        cl.insert();
        }
	


	cl.print(head);
	

    cl.SplitCLLIntoTwoHalves(head,&head1,&head2)  ;
    
    cl.print(head1);
    
    cl.print(head2);

        return 0;
}
