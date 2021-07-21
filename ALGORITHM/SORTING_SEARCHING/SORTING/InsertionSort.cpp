#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
	int i,j,temp;
	for(i = 1;i<n;i++){
		temp = arr[i];
		for(j = i-1; j >= 0 && arr[j]>temp;j--)	
			arr[j+1] = arr[j];
		arr[j+1] = temp;
	}
}
int main(){
	
	int size;
	cout<<"enter he size of array: ";
	cin>>size;
	
	int arr[size];
	
	cout<<"enter the elemnt of array one by one"<<"\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	insertionSort(arr,size);
	cout<<"the array afer sorting is"<<"\n";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
	
	return 0;
}
