#include<iostream>
#include<vector>
using namespace std;
int n;
bool isSafe(int row,int col , vector<vector<int>> arr){
	//we are not checking all 8 diretion because at a pertiqular moment the right side of the queen
	//will not contain any queen ,and current col will have nlut one queen , 
	//so we are checking only 3 direction
	//i.e upper left and lower left digonal, left direction
	
	//for upper left digonal i--, j--
	for(int i= row , j= col ;i>=0 && j>=0;i--,j--)
		if(arr[i][j] == 1) return false;
		
	//for lower left digonal i++, j--
	for(int i= row , j= col ;i<n && j>=0;i++,j--)
		if(arr[i][j] == 1) return false;
	
	//for left direction i, j--
	for(int i= row , j= col ;i>=0 && j>=0;i,j--)
		if(arr[i][j] == 1) return false;
		
	return true;
}

void NQueen(int col,vector<vector <int>> &arr){
	if(col == n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<arr[i][j]<<' ';
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	
	for(int row = 0;row<n;row++){
		if(isSafe(row,col,arr) == true){
			arr[row][col] = 1;
			NQueen(col+1,arr);
			arr[row][col] = 0;
		}
	}
}


int solve(){
	cout<<"enter the value for n";
	cin>> n;
	vector<vector<int>> arr(n,vector<int>(n,0));
	NQueen(0,arr);
}

int main(){
	solve();
	return 0;
}
