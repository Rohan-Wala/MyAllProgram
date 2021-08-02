
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void travel(int i,int j,string s,int arr[][2],int m,int n,vector<vector<int>> &vis){
	if(i >= m || j >=n || i < 0 || j< 0 || vis[i][j] == 1) 
		return;
	
	if(i == m-1 && j == n-1){
		cout<<s<<"\t";
		return;
	}
	vis[i][j] = 1;
	
	
	s += 'R';
	travel(i,j+1,s,arr,m,n,vis);
	s.pop_back();
	
	s += "D";
	travel(i+1,j,s,arr,m,n,vis);
	s.pop_back();
	
	s += 'L';
	travel(i,j-1,s,arr,m,n,vis);
	s.pop_back();
	
	s += "U";
	travel(i-1,j,s,arr,m,n,vis);
	s.pop_back();
	
//  optimized way 
//	char dir[] = {'U','R','D','L'};
//	char dirI[]= {-1,0,+1,0};
//	char dirJ[]= {0,+1,0,-1};
//					 
//	for(int d = 0;d<4;d++){
//		s += dir[d];
//		travel(i+dirI[d],j+dirJ[d],s,arr,m,n,vis)
//		s.pop_back();
//	}
	
	vis[i][j] = 0;
}
int main(){
	
	int arr[][2] = {{1,2},
					{5,6},
					{7,8}};
				
	string s = "";
	
	int m = sizeof(arr)/sizeof(arr[0]);
	int n = sizeof(arr[0])/sizeof(int);
	vector<vector<int>> vis(n,vector<int>(m,0));
	travel(0,0,s,arr,m,n,vis);
	return 0;				
	
}
