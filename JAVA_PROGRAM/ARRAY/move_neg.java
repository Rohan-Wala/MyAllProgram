//Move all the negative elements to one side of the array 

import java.util.*;
class move_neg{
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);
		System.out.println("enter the size of array");
		int size = s.nextInt();
		
		int arr[] = new int[size];
		System.out.println("ernter the value for array");
		for(int i=0;i<size;i++){
			arr[i]=s.nextInt();
			
		}
		int temp,j=0;
		// for(int i=0;i<size;i++){
			// for(int j=1;j<size-i;j++){
				// if(arr[j]<arr[j-1]){
					// temp = arr[j];
					// arr[j] = arr[j-1];
					// arr[j-1] = temp;
				// }
			// }
		// }
		for (int i = 0; i < size; i++) {
            if (arr[i] < 0) {
                if (i != j) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                j++;
            }
        }
		
		for(j=0;j<size;j++){
			System.out.print(arr[j]+"\t");
		}
	}
}