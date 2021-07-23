//using binary search
/*
Given a sorted array with possibly duplicate elements,
 the task is to find indexes of first and last occurrences of an element x in the given array. 

Examples: 

Input : arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}    
        x = 5
Output : First Occurrence = 2
         Last Occurrence = 5

Input : arr[] = {1, 3, 5, 5, 5, 5, 7, 123, 125 }    
        x = 7
Output : First Occurrence = 6
         Last Occurrence = 6
*/


#include<iostream>
using namespace std;

int firstpos(int arr[],int x, int i, int j, int n)
{
//	if(j >=i){
//		int mid = i + (j-i) / 2;
//		if((mid == 0 || x > arr[mid-1]) && arr[mid] == x )
//			return mid+1;
//		else if(x > arr[mid])
//			return firstpos(arr,x,mid+1,j,n);
//		else 
//			return firstpos(arr,x,i,mid-1,n);
//	}
//		return -1;

	int low = 0,high = j,res = -1;
		while(low <= high){
			int mid = (low+high)/2;
			
			if(x > arr[mid])	
				low  = mid+1; 
			else if(x < arr[mid])
				high = mid-1;
				
			else{
				res = mid;
				high = mid -1 ;
			}
		}
		return res;


}

int lastpos(int arr[],int x, int i, int j, int n){
//	if( j >= i){
//		int mid = i + (j-i) /2;
//		if((mid == n-1 || x < arr[mid+1]) && arr[mid] == x)
//			return mid+1;
//		else if(x < arr[mid])
//			return lastpos(arr,x,i,mid-1,n);
//		else 
//			return lastpos(arr,x,mid+1,j,n);
//	}	
//	return -1;

	int low = 0,high = j,res = -1;
	while(low <= high){
		int mid = (low+high)/2;
		
		if(x > arr[mid])	
			low  = mid+1; 
		else if(x < arr[mid])
			high = mid-1;
			
		else{
			res = mid;
			low = mid +1;
		}
	}
	return res;
}

int main(){
	
	

	int arr[] = {1,2,3,4,5,5,5,5,5,7,8,8};
	 
	int size = sizeof(arr) / sizeof(int);
	
	cout<<"the values of array are"<<"\n";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	int value = 5;
	

	cout<<"first occurrences of element 5 is "<<firstpos(arr,value,0,size-1,size)<<"\n";
	cout<<"last occurrences of element 5 is "<<lastpos(arr,value,0,size-1,size)<<"\n";
	   

	
}



