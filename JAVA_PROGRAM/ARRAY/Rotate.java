//Write a program to cyclically rotate an array by one.

import java.util.*;
class Rotate{
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);
		System.out.println("enter the size of array");
		int size = s.nextInt();
		
		int arr[] = new int[size];
		System.out.println("ernter the value for array");
		for(int i=0;i<size;i++){
			arr[i]=s.nextInt();	
		}
		//left rotate
		int temp,start;
		start = arr[0];
		for(int i=0;i<size-1;i++){
			temp = arr[i];
			arr[i]= arr[i+1];
			arr[i+1] = temp;
		}
		
		//
		
		//right rotate
		// int temp, end;
		// end = arr[size-1];
		// for(int i=size-1;i>0;i--){
			// temp = arr[i];
			// arr[i]= arr[i-1];
			// arr[i-1] = temp;
		// }
		//
		
		
		for(int j=0;j<size;j++){
			System.out.print(arr[j]+"\t");
		}
	}
}