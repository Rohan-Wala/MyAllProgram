#include<iostream>
#include<deque>

using namespace std;

void print(deque <int> q){
	deque <int> ::iterator it;
	for(it = q.begin();it< q.end();it++){
		cout<<*it<<"\t";
	}
	cout<<"\n";
}

int main(){
	deque <int> q1;
	q1.push_back(10);
	q1.push_front(20);
	
	q1.push_back(30);
	q1.push_front(40);
	
	cout<<"\n the deqeueu q1 is ";
	print(q1);
	
	cout<<"\n q1.size "<<q1.size();
	cout<<"\n max size "<<q1.max_size();
	
	cout<<"\n q1.at(2) "<<q1.at(2);
	cout<<"\n front element "<<q1.front();
	cout<<"\n rare element "<<q1.back();
	
	cout<<"\n pop front ";
	q1.pop_front();
	print(q1);
	
	cout<<"\n pop back ";
	q1.pop_back();
	print(q1);
	
	return 0;
	
	
}












