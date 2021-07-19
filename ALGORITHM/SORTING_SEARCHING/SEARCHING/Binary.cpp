//binary search
#include<iostream>
using namespace std;

int binary(int arr[],int value, int i,int j){
	
	if(i<=j) {
	
		int mid = (i+j)/2;
	
		if(arr[mid] == value)
			return mid;
		else if(arr[mid] > value)
			binary(arr ,value , i, mid-1);
		
		else if(arr[mid] < value)
			binary(arr ,value, mid+1 ,j);
	}
	return -1;

	
	
	
}

int main(){
	
	int size,value,index;
	cout<<"enter the total number of element "<<"\n";
	cin>>size;
	
	int arr[size];
	cout<<"enter the value in sorted form"<<"\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	cout<<"enter the value to search"<<"\n";
	cin>>value;
	
	index = binary(arr,value,0,size-1);
	   
	if(index == -1)
		cout<<"the element "<<value <<" is not present in array\n";
	else
		cout<<"the element "<<value <<" is present at "<< index+1<<" location"<<"\n";
 
	
}



