#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
void subset(char arr[],vector<char> &v , int n,int size){
	vector<char> ::iterator i;
	if(n == size){
		cout<<n;
		for(i = v.begin();i<v.end();i++)
			cout<<*i;
			
		cout<<"\n";
		return;
	}
	v.push_back(arr[n]);
	subset(arr,v,n+1,size);

	v.pop_back();
	subset(arr,v,n+1,size);
	
	
}
int main(){
	vector<char>v;
	char arr[] = {'a','b','c'};
	
	int size = sizeof(arr)/sizeof(char);
	
	subset(arr,v,0,size);
	
	
	
	
}
