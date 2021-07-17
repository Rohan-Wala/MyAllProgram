
#include <iostream>
using namespace std;

int main() {
	
	int arr[10] = {1,2,3,5,6,7,8};
	
	int index,value;
	

	for(int i=0;i<7;i++) {

		cout << arr[i] << " ";
	}

	cout << "\nEnter the index you want to delete the element: ";
	cin >> index;


	for(int i=index-1;i<8;i++) {

		arr[i] = arr[i+1];
	}

	for(int i=0;i<6;i++) {

		cout << arr[i] << " ";
	}
	cout << "\n";

 }
