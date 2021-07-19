// linear/sequnatial search
#include<iostream>


using namespace std;

void LinearSearch(int arr[],int size,int value){
int flag = 0,i;	
	for(i=0;i<size;i++){
		if(arr[i]== value){
			flag = 1;
			break;
		}

			
	}
	if(flag == 1)
		cout<<"the element "<<value <<" is present at "<< i+1<<" location"<<"\n";
	else
		cout<<"the element "<<value <<" is not present in array\n";
 

}
int main(){
	
	int size,value;
	cout<<"enter the total number of element"<<"\n";
	cin>>size;
	
	int arr[size];
	cout<<"enter the value"<<"\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	cout<<"enter the value to search"<<"\n";
	cin>>value;
	
	LinearSearch(arr,size,value);
	
}
