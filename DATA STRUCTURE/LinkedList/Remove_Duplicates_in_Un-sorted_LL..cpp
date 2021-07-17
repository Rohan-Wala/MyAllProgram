//Remove Duplicates in a Un-sorted Linked List.
#include<iostream>
#include<cstring>
using namespace std;
class node{
	public:
	int data;
	node* next;
};
node *head = NULL;

class LL{
	
	public:
		void insert();
		void LL_after_removing_duplicatevalue();
		void print();
	
};
void LL::insert(){
	node *temp = new node();
    cout << "Enter the value: ";
    cin>>temp->data;
    temp->next = NULL;

    node *p = new node();
    p = head;
    if(head==NULL) {
        head = temp;
    }
    else if(p!=NULL) {
		while(p->next!=NULL) {
            p = p->next;
        }
        p->next = temp;
    }
    
}
void LL::print(){
	node *p;
	cout<<"the values of LL are"<<"\n";
	if(head==NULL)
	cout<<"LL is empty";
	p=head;
	while(p!=NULL) {
		cout << p->data << endl;
        p = p->next;

        }
}
void LL::LL_after_removing_duplicatevalue(){
	node *p ,*q,*t;
//	p = head;
	
//	while(p != NULL){
//		q = p->next;
//		t = p;
//		while(q != NULL){
//			if(p->data == q->data){
//				temp = q;
//				q = q->next;
//				t->next = q ;
//				delete temp;
//			}else{
//				q = q->next;
//				t = t->next;
//			}
//		} 
//		p = p->next;
//	} 
	 p = head ; 

	while(p != NULL && p->next != NULL){
		q = p;
		while(q != NULL && q->next != NULL){
			if( p->data == q->next->data){
				cout<<q->data;
				node *temp = q->next;
				q->next = q->next->next;
				delete temp;
			}
			else{
				q = q->next;
			}
		}
		p = p->next;
	}
}

int main(){
	LL l;
	int num;
    cout << "Enter the number to be entered in the linked List: " <<"\n";
    cin >> num;
	for(int i=0;i<num;i++){
		l.insert();					
	}
	l.print();
	
	l.LL_after_removing_duplicatevalue();
	cout<<"the value after removalof duplicate value"<<"\n";
	
	l.print();
	
	return 0;
}

