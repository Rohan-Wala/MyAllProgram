

class DEMO{
    public static void main(String[] args) {
        int[] arr = {3,2,3,4,2,5,5,1,1};
        System.out.println(dublicate(arr));
    }
    static void pairsum(int[] arr , int sum){
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr.length;j++){
                if(arr[i]+arr[j] == sum)
                    System.out.println(arr[i] +" + " +arr[j]);
            }
        }
		
    }
	static int dublicate(int[] arr){
		int x =0;
		for(int i=0;i<arr.length;i++){
			x = x ^ arr[i];
		}
		return x;
	}
}