#include<iostream>
using namespace std;
bool palindrome(string s,int n,int size){
	if(n >= size){
		return true;
	}	
	else{
		if(s[n] == s[size])
			return palindrome(s,n+1,size-1);
		else 
			return false;
//	return ((s[n] == s[size]) && palindrome(s,n+1,size-1));	
	}
}
int main(){
	
	string s = "ABCDDCBA";
	
	int size = s.length();
//	cout<<size;
	cout<<palindrome(s,0, size-1);
	
	
	
	
}
