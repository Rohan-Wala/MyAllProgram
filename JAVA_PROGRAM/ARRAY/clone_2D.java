class clone_2D{
public static void main(String args[]){
		int intarray[][] = {{1,2,3},{4,5}};
		int clonearray[][] = intarray.clone();
		
		clonearray[1][1] = 10;
		System.out.println(intarray[1][1]);
		
	}
}