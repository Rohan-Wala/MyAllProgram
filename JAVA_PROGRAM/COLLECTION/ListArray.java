import java.util.*;

class ListArray{
	public static void main(String args[]){
		
		List<String> fruits = new ArrayList();
		
		fruits.add("apple");
		fruits.add("banana");
		fruits.add("dragonfruit");
		fruits.add("custard apple");
		
		List<String> vegetable = new ArrayList();
		
		vegetable.add("pateto");
		vegetable.add("onion");
		fruits.addAll(vegetable);
		//generic
		
		List l1 = new ArrayList();
		
		l1.add("apple");
		l1.add(10);
		l1.add(10.11);
		l1.add(true);
		
		
		System.out.println(fruits);
		System.out.println(l1);
		
	}
	
	
}