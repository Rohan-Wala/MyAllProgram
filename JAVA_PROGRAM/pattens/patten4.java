import java.util.*;
class patten4{
	public static void main(String args[]){
		
		int n;
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number ");
		n = sc.nextInt();
		
		for(int i=1;i<=n;i++){
			for(int j=n;j>i;j--){
				System.out.print("  ");
			}
			for(int k=1;k<=i;k++){
				System.out.printf("%-4d",k);
			}
			System.out.println();
		}
		
		
	}
}