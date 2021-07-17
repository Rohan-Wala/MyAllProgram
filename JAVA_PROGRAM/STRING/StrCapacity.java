import java.util.*;
class StrCapacity{
	public static void main(String[] args ){
		StringBuffer sb = new StringBuffer();
		System.out.println(sb.capacity()); //16
		
		sb.append("hello");
		System.out.println(sb.capacity()); //16
		
		sb.append("java is good language");
		System.out.println(sb.capacity()); // (16*2)+2 = 34
		
		sb.append("java is good language,java is good language");
		System.out.println(sb.capacity()); // (34*2)+2 = 70
		
		
	}
}