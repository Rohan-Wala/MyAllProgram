/*
Write a Java program which prints number of occurrences of each characters and 
also it should not print repeatedly occurrences of duplicate characters 
*/
#include<iostream>
#include<cstring>
using namespace std;
class node{
	public:
	char data;
	int count;
};
int main(){
	
string s = "geeksforgeeks";
node arr[26];
for(int i=0;i<26;i++){
	arr[i].count=0;
	arr[i].data = NULL;
}
for(int i=0;i<s.length();i++){
	for(int j=i+1;j<26;j++){
		if(arr[j].data!=s[i]){
			arr[j].data=s[i];
			arr[j].count++;
		}else if(arr[j].data==s[i]){
			arr[j].data++;
		}
	}
}

for(int i=0;arr[i].data != NULL ; i++){
	cout<<arr[i].data<<"   "<<arr[i].count<<"\n";
}

return 0;	
}
