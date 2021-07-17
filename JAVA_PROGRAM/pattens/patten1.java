class patten1{
public static void main(String args[]){

		int n = 1;
		for(int i=0;i<9;i++){
			if(i<5){
				for(int j=0;j<=i;j++){
					System.out.print("* ");
					
				}
				
			}
			
			else{
					for(int j=9;j>i;j--){
						System.out.print("* ");
					}
					

			}
		
		System.out.println();
		}
		
	}

}