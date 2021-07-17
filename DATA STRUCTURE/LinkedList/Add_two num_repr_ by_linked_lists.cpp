/*
Add two numbers represented by linked lists

Given two numbers represented by two lists, write a function that returns the sum list. 
The sum list is a list representation of the addition of two input numbers.

Input: 
List1: 5->6->3 // represents number 365 
List2: 8->4->2 // represents number 248 
Output: 
Resultant list: 3->1->6 // represents number 613 
Explanation: 365 + 248 = 613
Input: 
List1: 7->5->9->4->6 // represents number 64957 
List2: 8->4 // represents number 48 
Output: 
Resultant list: 5->0->0->5->6 // represents number 65005 
Explanation: 64957 + 48 = 65005
*/

#include<iostream>
#include<stack>
using namespace std;
class node{
	public:
		int data;
		node *next;
			
};

class LL{
//	Node *head = NULL;
	public:
		node *insert(node *head);
		void print(node *head);
		void print_sum_using_traversal(node *h1, node *h2);
		void print_sum_using_stack(node *h1, node *h2);
		node *insert_at_end(node *head,int value);
		node *insert_at_head(node *head,int value);

};
node *LL::insert(node *head){
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
    return head;
}

node *LL::insert_at_end(node *head, int value){
	node *temp = new node();
    temp->data = value;
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
    return head;
	
}

node *LL::insert_at_head(node *head ,int value){
	node *temp = new node();
    temp->data = value;
    temp->next = NULL;

    node *p = head;
    if(head==NULL)
        head = temp;
    else {
        temp->next = head;
        head=temp;
    }
        
       
    return head;
}
void LL::print(node *head){
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
void LL::print_sum_using_traversal(node *h1, node *h2){
	/*
	The steps are: 
1.Traverse the two linked lists from start to end
2.Add the two digits each from respective linked lists.
3.If one of the lists has reached the end then take 0 as its digit.
4.Continue it until both the end of the lists.
5.If the sum of two digits is greater than 9 then set carry as 1 
and the current digit as sum % 10
	*/
	node *aftersum = NULL;
	node *p1 = h1;
	node *p2 = h2;
	int carry=0,a=0,b=0,sum;
	
	while(p1 != NULL){
		a = (a*10) + p1->data;
		p1 = p1->next;
	}
	while(p2 != NULL){
		b = (b*10) + p2->data;
		p2 = p2->next;
	}
	
	sum = a+b;
	
	while(sum != 0){
		int rem = sum%10;
		sum = sum/10;
		aftersum = insert_at_head(aftersum , rem);
	}

	print(aftersum);
}

void LL::print_sum_using_stack(node *h1 ,node *h2){
	/*	
1.Create 3 stacks namely s1,s2,s3.
2.Fill s1 with Nodes of list1 and fill s2 with nodes of list2.
3.Fill s3 by creating new nodes and setting the data of new nodes 
to the sum of s1.top(), s2.top() and carry until list1 and list2 are empty.
4.If the sum >9
	set carry 1
	else
	set carry 0
5.Create a Node(say prev) that will contain the head of the sum List.
6.Link all the elements of s3 from top to bottom
7.return prev
 
	*/
	stack<int> s1,s2,s3;
	node *aftersum = NULL;
	node *p1 = h1;
	node *p2 = h2;
	int carry=0,a,b,sum;
	//for first LL
	while(p1 != NULL){
		s1.push(p1->data);
		p1 = p1->next;
	}
	//for 2nd LL
	while(p2 != NULL){
		s2.push(p2->data);
		p2 = p2->next;
	}
	
	while(!s1.empty() || !s2.empty()){
		if(s1.empty()) //if first list reach end
			a = 0;
			
			
		else 
			a = s1.top();
			
		if(s2.empty()) //if second list reach end
			b = 0;
		else 
			b = s2.top();
			
		if(carry == 1)
			
			sum = a+b+1;
		else 
			sum = a+b;
			
		if(sum >9){
				carry = 1;
				sum = sum%10;
			}
			else 
				carry = 0;
				
		
		
		
		s3.push(sum);

	if(!s1.empty())
		s1.pop();
	if(!s2.empty())
		s2.pop();
		
	}
	if(carry == 1){
		s3.push(1);
	}
	
	while(!s3.empty()){
		aftersum = insert_at_end(aftersum , s3.top());
		s3.pop();
	}
	
	print(aftersum);
	
}
int main(){
	
	LL l;
	node *h1=NULL,*h2= NULL;
	int num1,num2;
	cout<<"enter the number of value in first list";
	cin>>num1;
	cout<<"value for the first list"<<"\n";
	for(int i=0;i<num1;i++){
		h1 = l.insert(h1);
	}
	l.print(h1);
	
	cout<<"enter the number of value in second list";
	cin>>num2;
	cout<<"value for the second list"<<"\n";
	for(int i=0;i<num2;i++){
		h2 = l.insert(h2);
	}
	l.print(h2);
	
	l.print_sum_using_traversal(h1,h2);
//	l.print_sum_using_stack(h1,h2);
	
	
}
