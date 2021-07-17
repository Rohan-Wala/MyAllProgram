#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
Node *head = NULL;

class LL{
	
	public:
		void insert();
		void insert_at_position();
		void insert_befor_position();
		void delete_node_at_pos();
		void delete_last_node();
		void delete_LL();
		void search_value();
		void print();
		void print_revers(Node *head);
		Node *reversLL(Node *head);
};
//insetring at last
void LL::insert(){
	Node *temp = new Node();
    cout << "Enter the value: ";
    cin>>temp->data;
    temp->next = NULL;

    Node *p = new Node();
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

//inserting at location
void LL::insert_at_position(){
	int location;
	Node *temp = new Node();
	
	cout<<"ehter the location";
    cin>>location;
    
    cout << "Enter the value: ";
    cin>>temp->data;
    temp->next = NULL;
    
    Node *p = new Node();
    
    if(location == 0){
    	temp->next=head;
    	head=temp;
		return ;	
	}
	p = head;
	while(location-1 >0){
		p=p->next;
		location--;
	}
	temp->next=p->next;
	p->next=temp;
	
}
//inserting the value befor location
void LL::insert_befor_position(){
	int location;
	Node *temp = new Node();
	
	cout<<"ehter the location";
    cin>>location;
    
    cout << "Enter the value: ";
    cin>>temp->data;
    temp->next = NULL;
    
    Node *p = new Node();
    
    if(location == 0){
    	cout<<"ewewe";
    	temp->next=head;
    	head=temp;
		return ;	
	}
	p = head;
	while(location-2 >0){
		p=p->next;
		location--;
	}
	temp->next=p->next;
	p->next=temp;

}

//deleting the node
//at position 

void LL::delete_node_at_pos(){
	Node *temp,*p;
	temp = new Node();
	int pos;
	
	cout<<"enter the position to delete node:";
	cin>>pos;
	
	p = head;
	
	if(pos == 0){
		temp = head;
		head = head->next;
		delete temp;
		return;
	}
	while(pos-1 > 0 && p->next!=NULL){
		p = p->next;
		pos--;
	}
	if(p == NULL){
		cout<<"position is out of range"<<"\n";
		return ;
	}
	temp = p->next;
	p->next = p->next->next;
	delete temp;
	
}


//deleting last node
void LL::delete_last_node(){
	Node *temp,*p;
	temp = new Node();
	p=head;
	if(head == NULL){
		cout<<"list is empty";
		return;
	}
	while(p->next->next != NULL){
		p = p->next;
	}
	temp = p->next;
	p->next=NULL;
	delete temp;
}
//deleteing the LL
void LL::delete_LL(){
	Node * temp;
	while(head != NULL){
		temp = head;
		head = head->next;
		delete temp;
	}
}

//searching the element
void LL::search_value(){
	int value,flage=0;
	cout<<"enter the value to search";
	cin>>value;
	Node *p;
	p=head;
	while(p!=NULL){
		if(p->data == value){
		flage =1;
		break;
		}
		p=p->next;
	}
	if(flage==1)
	cout<<"value is present"<<"\n";
	else
	cout<<"value is not present"<<"\n";
}
//printing the data
void LL::print(){
	Node *p;
	cout<<"the values of LL are"<<"\n";
	if(head==NULL)
	cout<<"LL is empty";
	p=head;
	while(p!=NULL) {
		cout << p->data << endl;
        p = p->next;

        }
}

//print in revers 
void LL::print_revers(Node *head){

	if(head==NULL){
	return ;
	}else {
		print_revers(head->next);
		cout << head->data << endl;
        }
}
Node *LL::reversLL(Node *head){
	Node *p,*q,*r;
	p = NULL;
	q = head;
	r = q->next;
	while(q !=NULL){
		q->next = p;
		p = q;
		q = r;
		if(r != NULL)
			r = r->next;
		
	}
	return p;
}

//SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
//    SinglyLinkedListNode *p;
//    p = llist;
//    while(p->next!= NULL){
//        if(p->data == p->next->data){
//            p->next = p->next->next;
//        }else{p =p->next;}
//        
//    }
//    return llist;
//
//}

int main() {
    LL l;
	int num;
    cout << "Enter the number to be entered in the linked List: " <<"\n";
    cin >> num;
	for(int i=0;i<num;i++){
		l.insert();					
	}
	l.print();
		
			
		
	head = l.reversLL(head);
		l.print();
		
	cout<<"printing in revers "<<"\n";
		l.print_revers(head);

        return 0;
}
