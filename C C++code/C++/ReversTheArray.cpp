#include<iostream>
using namespace std;
void revers(int arr[],int n){
	
	for(int i=0,j= n-1;i<j;i++,j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
int main(){
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(int);
	
	for(int i=0 ;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	revers(arr, n);
	for(int i=0 ;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
}
