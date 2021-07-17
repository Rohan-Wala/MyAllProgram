import java.util.*;
class StrReplace{
	public static void main(String[] args){
		StringBuffer sb = new StringBuffer("hello");
		sb.replace(1,3,"java");
		//sb.replace(1,3,'e');// not allow
		System.out.println(sb);
	}  
}