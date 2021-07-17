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