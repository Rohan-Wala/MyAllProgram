import java.util.*;
class IPL{
	int id ;
	String name;

	IPL(){
		System.out.println(id+ " " + name);
	}	
}
class DefaultConstructor{
	public static void main(String[] args){
		IPL i1 = new IPL();
	}
}