#include <iostream>

using namespace std;
class node{
	public:
        int data;
        node *next;
        node *prev;
}; 
node *head = NULL;
class DLL {
		
		public:
		void insert();
        void traverse();
        node* reverseByGivenSize(node *head,int size);
};
void DLL::insert(){
	node *temp = new node();
	node *p;
	cout<<"enter the data\n";
	cin>>temp->data;
	temp->next = temp->prev = NULL;
	
	if(head == NULL){
		head = temp;
	}
	else{
		p = head;
		while(p->next != NULL) {
			p = p->next;
		}
		p->next= temp;
		temp->prev = p;
		
		
	
	}

	
}
void DLL::traverse() {

    node *p = head;

	
    while(p!=NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout<<"\n";
    //print in revers 
   /* while(head->next != NULL) {
       head = head->next;
    }
    while(head != NULL) {
       cout<<head->data<<" ";
       head = head->prev;
    }*/
    
    cout << "\n";
}

node* DLL::reverseByGivenSize(node *head,int size) {
	int si = 0;
    node *p = NULL;
    node *q = head;
    node *r = NULL;

	while(q != NULL && si<size){
		r = q->next;
		
		q->next = p;
		q->prev = r;
		
		p = q;
		q = r;
		si++;
	}
	if(r != NULL){
		node *z = reverseByGivenSize(q,size);
			head->next = z;
			z->prev = head;
	}
	
	return p;
}

int main() {

    DLL dl;
    int num,size;
    cout << "Enter the number to be entered in the doubly linked List: " <<"\n";
    cin >> num;
	for(int i=0;i<num;i++){
		dl.insert();				
	}
	dl.traverse();
	
	cout << "Enter the size of group to revers the linked List by that group: " <<"\n";
    cin >> size;
     
	head = dl.reverseByGivenSize(head,size);
	
	dl.traverse();
	
    return 0;

}
