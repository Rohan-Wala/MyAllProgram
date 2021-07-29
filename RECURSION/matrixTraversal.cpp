//print all th path by which we can reach last element of martix from first element 
#include<iostream>
#include<string>
using namespace std;

void travel(int i,int j,string s,int arr[][2],int m,int n){
	if(i >= m || j >=n) 
		return;
	
	if(i == m-1 && j == n-1){
		cout<<s<<"\t";
		return;
	}
	
	s += 'R';
	travel(i,j+1,s,arr,m,n);
	s.pop_back();
	
	s += "D";
	travel(i+1,j,s,arr,m,n);
	s;
}
int main(){
	
	int arr[][2] = {{1,2},
					{5,6},
					{7,8}};
				
	string s = "";
	
	int m = sizeof(arr)/sizeof(arr[0]);
	int n = sizeof(arr[0])/sizeof(int);
	
	travel(0,0,s,arr,m,n);
	return 0;				
	
}
