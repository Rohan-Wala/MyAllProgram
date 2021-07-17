import java.util.*;
class Str_EqualMethod_And_EqualToOperator{
	public static void main(String[] args){
		String s1= "rohan";
		String s2= "rohan";
		String s3 = new String("rohan");
		
		//equal
		System.out.println(s1.equals(s2)); // true
		System.out.println(s1.equals(s3)); // true
		
		// == operator
		System.out.println(s1 == s2); // true
		System.out.println(s1 == s3); // false
		
		
		
	}
}