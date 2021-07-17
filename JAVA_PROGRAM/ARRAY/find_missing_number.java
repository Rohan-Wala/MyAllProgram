import java.util.*;
class find_missing_number{
	public static void main(String args[]){
		
		int arr[] = {5,2,1,6,9,8,3,10};
		//{1,2,3,5,6,8,9,10};
		Arrays.sort(arr);
		
		for(int i=0;i<arr.length;i++){
			if(arr[i]!=i+1){
				System.out.println("missing number is " + (i+1));
				continue;
				}
		}
		
		
	}
}