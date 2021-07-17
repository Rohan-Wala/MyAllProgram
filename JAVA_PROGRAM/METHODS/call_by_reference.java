class seting_the_value{
	int a,b;
	seting_the_value(int x,int y){
		a = x;
		b = y;
	}
	void changeValue(seting_the_value obj){
		obj.a += 10;
		obj.b += 20;
	}
	
}
class call_by_reference{
	public static void main(String args[]){
		seting_the_value A = new seting_the_value(10,20);
		
		System.out.println("VAlue of a:"+A.a+"& b"+A.b);
		
		A.changeValue(A);

		System.out.println("VAlue of a:"+A.a+"& b"+A.b);

		
	}
}