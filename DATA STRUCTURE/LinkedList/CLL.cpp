#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
Node *head = NULL;
Node *last = NULL;
class CLL{
	public:
		void insert();
		void print();
		void insertAtPosi();
		
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
        last = head;
        return ;
        
    }
   
		while(p->next!=head) {
            p = p->next;
        }
        
		p->next = temp;
		last = temp;
		temp->next=head;
        
    
    
}
void CLL::insertAtPosi(){
	int pos;
	Node *temp,*p;
	temp = new Node;
	cout<<"enter the data:";
	cin>>temp->data;
	cout<<"enter the position:";
	cin>>pos;
	
	p=head;
	if(pos == 0){
		temp->next = head;
		last->next = temp;
		head = temp;
		return ;
	}
	while(pos-1 >0 && p->next != last){
		p = p->next;
		pos--;
	}
	temp->next = p->next;
	p->next = temp;
}
void CLL::print(){
	cout<<"the values of LL are"<<"\n";
	if(head==NULL)
	cout<<"LL is empty";
	Node *p;
	p=head;
	while(p!=last) {
		cout << p->data << endl;
        p = p->next;
        }
        cout<<p->data<<"\n";
}

int main() {
    int num;
//    Node *head = NULL;
CLL cl;
    cout << "Enter the number to be entered in the linked List: " <<"\n";
    cin >> num;

    for(int i=0;i<num;i++) {
        cl.insert();
        }
	


	cl.print();
	
	cl.insertAtPosi();
	
	cl.print();
        

        return 0;
}
