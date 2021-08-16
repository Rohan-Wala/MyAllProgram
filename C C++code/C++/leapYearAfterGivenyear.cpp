#include<iostream>
using namespace std;

int main(){
	int year=100, n=4;
	int count=0;
	for(int i=year;;i++){
		if(i%4 == 0 && i%100 != 0 || i%400 == 0){
			count++;
			cout<<i<<" ";
			}
		if(count == n)
			break;	
	}
}
