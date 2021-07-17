import java.util.*;
class Ambiguity{
	int value;
	String name;
	Ambiguity(int value, String name){
		this.value = value;
		this.name = name;
	}
	
}

class ThisMethod{
	void n(){
		System.out.println("this is n method");
	}
	
	void m(){
		n();
		System.out.println("this is m method");
	}
}

class ThisKeyword{
	public static void main(String[] args){
		// ambiguity
		// Ambiguity am = new Ambiguity(1,"ABC");
		// System.out.println(am.value + " " + am.name);
	
		// ThisMethod
		ThisMethod tm = new ThisMethod();
		tm.m();
	}
}