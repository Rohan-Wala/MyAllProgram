import java.util.*;
class find_max_min{
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);
		System.out.println("ernter the size of array");
		int size  = s.nextInt();
		
		int arr[] = new int[size];
		System.out.println("ernter the value for array");
		for(int i=0;i<size;i++){
			arr[i]=s.nextInt();
		}
		int max=0,min=999;
		for(int i=0;i<size;i++){
			if(arr[i]>max){
				max=arr[i];
			}
			if(arr[i]<min){
				min=arr[i];
			}
		}
		System.out.println("the max value is "+max+" the min value is "+min);	
	}
}