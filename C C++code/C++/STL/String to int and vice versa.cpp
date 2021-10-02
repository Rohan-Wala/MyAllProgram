#include<bits/stdc++.h>
using namespace std;
int main(){
//	String to int usinf stoi()
	string str = "123";
	cout<<"String to int usinf stoi() ";
	int num = stoi(str);
	cout<<num<<"\n";
	
//	char array to int usinf atoi()
	char arr[] = "123";
	cout<<"char array to int usinf atoi() ";
	num = atoi(arr);
	cout<<num<<"\n";
	
//	int to string
	num = 456;
	cout<<"int to string using to_string() ";
	string str2 = to_string(num);
	cout<<str2<<"\n";
	
	return 0;
	
	
	
}
