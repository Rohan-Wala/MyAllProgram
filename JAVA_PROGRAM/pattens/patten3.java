class patten3{
	public static void main(String args[]){
		for(int i=1;i<=6;i++){
			for(int j=6;j>i;j--){
				System.out.print("  ");
			}
			for(int k=1;k<=(i*2)-1;k++){
				if(k==(i*2)-1||k==1||(i==6 && k%2!=0))
					System.out.print("* ");
				else 
					System.out.print("  ");
				
				
			}
			System.out.println();
		}
	}
}