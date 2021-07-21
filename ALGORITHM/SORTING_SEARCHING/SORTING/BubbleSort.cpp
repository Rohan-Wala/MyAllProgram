#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
	for(int i=1;i<n;i++){
		for(int j =0;j<n-i;j++){
			if(arr[j] >arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
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
	
	BubbleSort(arr,size);
	cout<<"the array afer sorting is"<<"\n";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
	
	return 0;
}
