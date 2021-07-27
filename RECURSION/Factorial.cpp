#include<iostream>
using namespace std;
int fact(int n){
	int ans = 0;
	if(n <= 1)
		return n;
	
	ans = n * fact(n-1);	
	return ans;
}
int main(){
	
	int n = 5;
	cout<<fact(n);
	return 0;
}

//time complexity is O(n) because we are calling the same function n times 
//for one function call time complexity is O(1)
//and we are calling it n times so at end it become O(n)
