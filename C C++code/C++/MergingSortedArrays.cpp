
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


 // finding the larger element from nums1 and nums2 and placing it at it's correct position
  // if nums1 element is greater than nums2 then replace nums1[i] with greater element and reduce the pointer i and p1 because now i will point to next position where next greater element will be filled 
    // if nums2 element is greater than nums1 then replace nums1[i] with greater element and reduce the pointer i and p2 because now i will point to next position where next greater element will be filled 