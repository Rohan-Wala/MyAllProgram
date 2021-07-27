/*
Input:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
           	  {5, 6, 7, 8},
              {9, 10, 11, 12},
              {13, 14, 15,16}}
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/
#include<iostream>
using namespace std;

void spiralTraversal(int arr[][4], int row, int col){
	
	int k = 0 ;//starting of row
	int m = row;//end of row
	int l = 0 ; // start of coll
	int n = col; //end of coll
	int i;
	
	
	while(k < m && l < n){
		//first print thr first row from the remaining rows
		for(i = l ; i< n ;i++)
			cout<<arr[k][i]<<" ";
			
		k++;
		
		// Print the last column from the remaining columns
		for(i = k;i< m ;i++)
			cout<<arr[i][n-1]<<" ";
		
		n--;
		
		// Print the last row from the remaining rows
		if(k < m){
			for(i = n-1;i >= l;i--)
				cout<<arr[m-1][i]<<" ";
			m--;
		}
		
		// Print the first column from the remaining columns
		if(l < n){
			for(i = m-1;i >= k;i--)
				cout<<arr[i][l]<<" ";
			l++;
		}
		
	}
}

int main(){
	 
	int arr[][4] = {{1,  2,  3,  4},
           	 	   {5,  6,  7,  8},
                   {9, 10, 11, 12},
                   {13, 14, 15,16}};
				   
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(int);
	
	spiralTraversal(arr,row,col);			     
                   
	
	return 0;
	
}
