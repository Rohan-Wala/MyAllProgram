
#include <iostream>
using namespace std;

int main() {

	int arr1[] = {1,3,5,7,9};
	int arr2[] = {2,4};

	int arr3[30];

	int num = 0;

	int i=0,j=0;


	while(i<5 && j<2) {
		if(arr1[i] < arr2[j]) {

			arr3[num] = arr1[i];
			num++;
			i++;
		}else {

			arr3[num] = arr2[j];
			num++;
			j++;
		}
	}

	while(i<5) {

		arr3[num] = arr1[i];
		num++;
		i++;
	}

	while(j<2) {

		arr3[num] = arr2[j];
		num++;
		j++;
	}


for(int i=0;i<num;i++) {

	cout << arr3[i] << " ";
}
return 0;
}
