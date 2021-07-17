import java.util.*;
class Kth_max_min{
	public static void main(String args[]){
		
		Scanner s = new Scanner(System.in);
		System.out.println("enter the size of array");
		int size = s.nextInt();
		
		int arr[] = new int[size];
		System.out.println("ernter the value for array");
		for(int i=0;i<size;i++){
			arr[i]=s.nextInt();
		}
		int temp =0;
		for(int i=0;i<size;i++){
			for(int j=1;j<=(size-1);j++){
				if(arr[j]<arr[j-1]){
					temp = arr[j-1];
					arr[j-1]= arr[j];
					arr[j]= temp;
				}
			}
		}
		
		for(int i=0;i<size;i++){
			System.out.println("array element "+arr[i]);
		}
		System.out.println("enter the index to find Kth max and min");
		int k = s.nextInt();
		
		System.out.println("the "+k+"th" + " max is "+ arr[size-k]+"\t"
		+"the "+k+"th" + " min is "+ arr[k-1]);
		
	}
}