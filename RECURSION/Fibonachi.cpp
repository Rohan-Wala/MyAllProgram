#include<iostream>
using namespace std;
int fibo(int n){
//	cout<<n<<" ";
	if(n <= 1)
		return n;
	
	int ans2 = fibo(n-2);
	int ans1 = fibo(n-1);
	return ans2+ans1;
}
int main(){
	
	int n = 40;
	cout<<fibo(n);
	return 0;
}
//multipal recursion call
