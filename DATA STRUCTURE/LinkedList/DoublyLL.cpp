
#include <iostream>
using namespace std;

class Node {
	
	public:
	int data;
	Node *next,*prev;
};

void forwardTraversal(Node *head) {
	
	while(head!=NULL) {
		
		cout << head->data<<endl;
		head = head->next;

	}		
}
 
void reverseTraversal(Node *head) {
	

	while(head->next != NULL) {

		head = head->next;
	}
	
	while(head!= NULL) {
		
		cout << head->data << endl;
		head = head->prev;
	}
}


Node *create(Node *head) {

	Node *temp = new Node();
	cout <<"Enter the data: ";
	cin >>temp->data;
	temp->next = NULL;
	temp->prev = NULL;

	Node *p = head;
	
	if(head==NULL) 
		head = temp;
	else {

		while(p->next!=NULL) {

			p = p->next;
		}
		p->next = temp;
		temp->prev = p;	
	}
	return head;

}

int main() {
	
	Node *head = NULL;

	for(int i=0;i<4;i++) {

		head = create(head);
	}
	
	cout << "Forward traversal\n";
	forwardTraversal(head);

	cout <<"\nReverse traversal\n";
	reverseTraversal(head);

	return 0;
}
