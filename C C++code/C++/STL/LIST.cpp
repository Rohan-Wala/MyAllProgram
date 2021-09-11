//list
//list  are double linked list

#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void showlist(list <int> g)
{
	list<int>::iterator it;
	for(it = g.begin();it != g.end(); it++){
		cout<<*it<<" ";
	}
}

int main(){
	list <int> list1 , list2;
	for(int i=1;i<=10 ;i++){
		list1.push_back(i);
		list2.push_front(i*10);
	}
	
	cout<<"\nthe list 1 is ";
	showlist(list1);
	
	cout<<"\nthe list 2 is ";
	showlist(list2);
	
	
	cout<<"\n list 1 pop back  ";
	list1.pop_back();
	showlist(list1);
	
	cout<<"\n list 2 pop front  ";
	list2.pop_front();
	showlist(list2);
	
	cout<<"\n revers the list ";
	list1.reverse();
	showlist(list1);
	
}
