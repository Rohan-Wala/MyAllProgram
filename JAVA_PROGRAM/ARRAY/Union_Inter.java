import java.util.*;
class Union_Inter{
	void UnionArr(int arr1[],int arr2[]){
		//union
		int k=0;
		int uni[] = arr1.clone();
		for(int i=0;i<arr1.length;i++){
				System.out.print(arr1[i]+"\t");
		}
		
		for(int i=0;i<arr2.length;i++){
			for(int j=0;j<uni.length;j++){
				if(arr2[i]==uni[j]){
					k=1;
				}
			}
			if(k==0){
			System.out.print(arr2[i]+"\t");
			}
			k=0;
				
				
		}
		
		
	}
	
	
	void InterArr(int arr1[],int arr2[]){
		//intersection
		// int k=0;
		int i=0,j=0;
		while(i<arr1.length && j<arr2.length){
		// for(int i=0;i<arr1.length;){
			// for(int j=0;j<arr2.length;){
				// if(arr1[i]==arr2[j]){
					// System.out.print(arr2[j]+"\t");
				// }
				if(arr1[i] < arr2[j]){

				i++;

			}else if(arr2[j] < arr1[i])	{

				j++;

			} else {

				System.out.println(arr2[j]);
				i++;
				j++;

			}
			
			// }
		}
		
	}
	
	public static void main(String args[]){
		int arr1[]={10,20,30,40,50};
		int arr2[]={5,30,30,60,80};
		
		Union_Inter ui = new Union_Inter();
		ui.UnionArr(arr1,arr2);
		System.out.println();
		ui.InterArr(arr1,arr2);
			
		}
	
}