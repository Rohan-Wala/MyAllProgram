class arr_4{
	public static void main(String args[]){
		int arr[]={1,2,3,4,5,6,7,8,9,10};
		int tofind = 7;
		
		for(int i=0;i<arr.length;i++){
			for(int j=i+1;j<arr.length;j++){
				if(arr[i]+arr[j]==tofind){
					System.out.println("the pair is "+arr[i]+","+arr[j]);
				}
			}
		}
	}
}
// o/p

// the pair is 1,6
// the pair is 2,5
// the pair is 3,4
