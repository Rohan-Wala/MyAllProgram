import java.util.*;
class pro1_reverse{
	 void arrReverse(int arr[],int size){
		int end = size-1;
			for(int j=0;j<=end;j++,end--){
				int temp = arr[j];
				arr[j] = arr[end];
				arr[end] = temp;
			}	
	}
	public static void main(String args[]){
		
		Scanner s = new Scanner(System.in);
		System.out.println("ernter the size of array");
		int size  = s.nextInt();
		
		int arr[] = new int[size];
		System.out.println("ernter the value for array");
		for(int i=0;i<size;i++){
			arr[i]=s.nextInt();
		}
		
		pro1_reverse R = new pro1_reverse();
		R.arrReverse(arr,size);
		
		System.out.println("array after revers");
		for(int i=0;i<size;i++){
			System.out.println(arr[i]+"\t");
		}
		
	}
}