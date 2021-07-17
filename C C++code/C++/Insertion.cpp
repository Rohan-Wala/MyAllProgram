
#include <iostream>
using namespace std;

int main() {
	
	int arr[10] = {1,2,3,5,6};
	
	int index,value;
	
	cout << "Enter the index and value: ";
	cin >> index >> value;

	for(int i=4;i>=index-1;i--) {

		arr[i+1] = arr[i];
	}

	arr[index-1] = value;

	for(int i=0;i<6;i++) {

		cout << arr[i] << " ";
	}
	cout << "\n";

 }
