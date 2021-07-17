import java.util.*;
class return_list{
		public static List<Object> getDetails(){
			String name = "geeks";
			int age = 20;
			char gender = 'm';
			return Arrays.asList(name,age,gender);
		}
		
		public static void main(String args[]){
			List<Object> person = getDetails();
			System.out.println(person);
		}
}