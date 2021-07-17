#include<iostream>
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
		void print();
		node *reversLLinsize(node *head, int size);
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


node *LL::reversLLinsize(node *head , int size){
	node *p,*q,*r;
	 int si = 0;
	 p = NULL;
	 q = head;
	 r = NULL;
	 
	 while(q != NULL && si <size){
	 	r = q->next;
	 	q->next = p;
	 	p = q;
	 	q = r;
	 	si++;
	 }
	 
	 if(r != NULL)
	 	head->next = reversLLinsize(q , size);
	 
	 return p;

}


int main() {
    LL l;
	int num,size;
    cout << "Enter the number to be entered in the linked List: " <<"\n";
    cin >> num;
	for(int i=0;i<num;i++){
		l.insert();					
	}
	l.print();
		
	cout << "Enter the size of group to revers the linked List by that group: " <<"\n";
    cin >> size;
			
		
head = 	l.reversLLinsize(head,size);
		
		
	l.print();
		
        return 0;
}
