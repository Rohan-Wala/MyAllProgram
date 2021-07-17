#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};

node *head= NULL;



class LL{
	
	public:
//		int count=0;
		void create();
		void print();
		int  find_occurance(node *p,int element);			
};

void LL::create(){
	node *temp,*p;
	
	temp = new node();
	cout<<"enter the data:";
	cin>>temp->data;
	p = head;
	if(head == NULL){
		head = temp;
		return ;
	}
	else{
		while(p->next != NULL){
		p = p->next;
		}
		p->next = temp;
	}
//	count++;
}

void LL::print(){
	node *p;
	p = head;
	if(head == NULL)
		return;
	while(p!=NULL){
		cout<<p->data<<"\t";
		p = p->next;
	}
	cout<<"\n";
}
int cnt = 0 ;
int  LL::find_occurance(node *p, int element ){
	if(p==NULL) 
        return cnt;
    else if(p->data == element) {
        cnt++;
        return find_occurance(p->next,element);
    }
    else
        return find_occurance(p->next,element);
	
	
	
	
/*Iterating through the whole LL and checking if data is same as var 
and increamenting count if same

      int occ = 0;
      Node *p = head;
      while(p!=NULL) {
          if(p->data == var)
              occ++;
          p = p->next;
      }
      return occ;*/
      
      
}
int main(){
	
	LL l;
	int num,element;
//	node *p = head;
	cout<<"enter the number of element for ll:";
	cin>>num;
	for(int i=0;i<num;i++){
		l.create();
	}
	
	l.print();
	
	node *p = head; // to updata  p after creation of LL
	cout<<"enter the number to find the count of occrunce:";
	cin>>element;
	cout<<l.find_occurance(p,element);

	
	return 0;
}
