//pair
#include<iostream>
#include<utility>
using namespace std; 
int main(){
	
	pair<int ,char> p1;
	//initialize pair 
//	pair g1; // deafult
//	pair g2(1,'a')// with different data type
//	pair g3(1,10) // with sqame data type
//	pair g4(g3) // copy of g3
	p1.first = 1;
	p1.second = 'a';
	
	
	//pair of pair
	pair <int , pair <int ,char >> p3 = {1,{2,'a'}};
	cout<<p1.first<<"\t"<<p1.second;
}
