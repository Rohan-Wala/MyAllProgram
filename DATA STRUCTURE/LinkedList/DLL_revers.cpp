#include <iostream>

using namespace std;
class node{
	public:
        int data;
        node *next;
        node *prev;
}; 
class DLL {
		node *head;
		public:
		void insert();
        void print();
        
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
    
    while(head->next != NULL) {
       head = head->next;
    }
    while(head != NULL) {
       cout<<head->data<<" ";
       head = head->prev;
    }
    
    
    


    cout << "\n";
}

node* DLL::reverse(node *head) {

    node *p = NULL;
    node *c = head;
    node *n = NULL;

    while(c!=NULL) {

        n = c->next;
        c->next = p;
        c->prev = n;

        p=c;
        c=n;
    }
    return p;
}

int main() {

    DLL dl;
    int num,size;
    cout << "Enter the number to be entered in the linked List: " <<"\n";
    cin >> num;
	for(int i=0;i<num;i++){
		dl.insert();				
	}
	dl.traverse();
    return 0;

}
