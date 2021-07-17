class ArrayCopy{
	public static void main(String args[]){
		int a[][] = {{1,2,3},{4,5}};
		
		int b[][] = new int[a.length];
		
		//making the copy of array
		System.arraycopy(a,0,b,0,3);
		
		b[0]++;
		
		System.out.println("content of a[]");
		for(int i=0;i<a.length;i++){
					System.out.println(a[i]+" ");
		}
		System.out.println("content of b[]");
		for(int i=0;i<b.length;i++){
					System.out.println(b[i]+" ");
		}
	}
}