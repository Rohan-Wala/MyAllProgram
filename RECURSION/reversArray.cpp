#include<iostream>
using namespace std;
void revers(int arr[],int start ,int n){
	
	if(start >= n)
		return;
		
	swap(arr[start],arr[n]);
	revers(arr,start+1,n-1);

}
int main(){
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(int);
	
	for(int i=0 ;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	revers(arr,0, n-1);
	
	for(int i=0 ;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
}
