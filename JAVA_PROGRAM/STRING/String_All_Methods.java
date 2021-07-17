import java.util.*;
class String_All_Methods{
	public static void main(String[] args){
		
		
		
		// 1)CharAt
		// String s1 = "ROHAN";
		// char ch = s.charAt(2); 
		// System.out.println(ch); // H
		
		
		// 2)compareTO
		// String s1 = "ROHAN";
		// String s2 = "WALA";
		// String s3 = "";
		// System.out.println(s1.compareTo(s1)); // 0
		// System.out.println(s1.compareTo(s2)); // -5
		
		// System.out.println(s2.compareTo(s1)); //  5
		
		// System.out.println(s1.compareTo(s3)); // 5
		// System.out.println(s3.compareTo(s1)); // -5
		
		//3) concat
		
		//4)contais
		// String s1 = "welcome to java";
		// System.out.println(s1.contains("to")); // true
		// System.out.println(s1.contains("")); // false
		
		// 5)endsWith
		// String s1 = "welcome to java";
		// System.out.println(s1.endsWith("java"));
		// System.out.println(s1.endsWith("t"));
		
		//6)equals()
		// String s1 = "ROHAN";
		// String s2 = "ROHAN";
		// String s3 = new String("ROHAN");
		
		// System.out.println(s1.equals(s1)); // true
		// System.out.println(s1.equals(s2)); // true
		
		//7)equalsIgnoreCase()
		// String s1 = "java";
		// String s2 = "JaVa";
		// System.out.println(s1.equalsIgnoreCase(s2)); // true
		
		// 8)format()
		// String s1 = String.format("value is %f",123.456);
		// String s2 = String.format("value is %12.10f",123.456);
		// System.out.println(s1); 
		// System.out.println(s2); 
		
		// 9)
		// String s1 =  "ABCDEF";
		// byte[] brr = s1.getBytes();
		// for(int i=0;i<brr.length;i++){
			// System.out.println(brr[i]);
		// }
		
		// 10)getChars
		String s = new String("welcome to java program");
		char[] ch = new char[10];
		try{
		s.getChars(7,15,ch,0);
		System.out.println(ch);
		
		}catch(Exception e){
			System.out.println(e);
		}
		
	
	
		
		
		
		
	}
}