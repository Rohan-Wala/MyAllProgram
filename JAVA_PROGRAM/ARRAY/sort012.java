//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

import java.util.*;
class sort012{
	public static void main(String args[]){
		
		Scanner s = new Scanner(System.in);
		System.out.println("enter the size of array");
		int size = s.nextInt();
		
		int c0=0,c1=0,c2=0;
		int arr[] = new int[size];
		System.out.println("ernter the value for array");
		for(int i=0;i<size;i++){
			arr[i]=s.nextInt();
			
			if(arr[i]==0){
				c0++;
			}
			if(arr[i]==1){
				c1++;
			}
			if(arr[i]==2){
				c2++;
			}
		}
		
	
		int i=0;
		int arr2[] = new int[size];
		while(c0>0){
			arr2[i]=0;
			i++;
			c0--;
		}
		while(c1>0){
			arr2[i]=1;
			i++;
			c1--;
		}
		while(c2>0){
			arr2[i]=2;
			i++;
			c2--;
		}
		
		for(int j=0;j<size;j++){
			System.out.print(arr2[j]+"\t");
		}
		
		}
	}