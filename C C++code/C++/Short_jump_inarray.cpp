#include<iostream>
using namespace std;
int main(){
int arr[] = {4,5,0,4,1,4,5,5,3,3,1,5};
int i=0,j=0,k=0,s=0;
int n = 12;

k =  arr[i];
	
for(;;){
	k =  arr[i];
	j += k;
	cout<<j<<"\n";
	if(j <= n-1)
	{
		s++;
		i += k ;
		if(j == n-1)
		{
			cout<<"count is "<<s;
			break;
		}
	}
	else if(j > n-1 )
	{
		cout<<"not posible";
		return -1;
	}
	
}
	return 0;
}

