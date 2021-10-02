/* Using  temporary string
If you are given that the length of the 
delimiter is 1, then you can simply 
use a temp string to split the string.
*/
#include<bits/stdc++.h>
using namespace std;
void split(string str, char del ){
	//normal way
	
	//temp to store the current world upto del
	string temp = "";
	for(int i=0;i<str.length();i++){
		// if cur char is not in del then append it to temp
		//start the new word
		if(str[i] != del)
			temp += str[i];
		else{
			cout<<temp<<" 	";
			temp = "";
		}
	}
	cout<<temp;
}

int main(){
	string str= "geeks\tfor\tgeeks";
	char del = ' ';
	split(str,del);
	
	
	
	return 0;
}
