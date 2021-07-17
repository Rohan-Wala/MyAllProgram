import java.util.*;
class StrDelete{
	public static void main(String[] args){
		StringBuffer sb = new StringBuffer("hello");
		sb.delete(2,5);
		System.out.println(sb);
	}
}