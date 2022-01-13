/*
Static methods are the methods in Java that can be called without creating an object of class. They are referenced by the class name itself or reference to the Object of that class.  
*/
class StaticMethod{

	static String s = "ABC";
	static int cube(int a){
		s = "XYZ";
		System.out.println(s);
		return a*a*a;
	}
public static void main(String[] args){
	int res = StaticMethod.cube(5);
	System.out.println(res);
}
}