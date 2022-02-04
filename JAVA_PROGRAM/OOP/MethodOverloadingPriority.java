
import java.util.*;

class Demo {
	
	
	void m1(int i) {	//1
	
		System.out.println("Int primitive");
	}

	void m1(float f) {	//2

		System.out.println("Float primitive");
	}
		
	void m1(Integer I) {	//3

		System.out.println("Integer class");
	}	
	
	void m1(Number I) {	//4

		System.out.println("Number(Direct parent of Integer class) Integer class");
	}	


	void m1(Object I) {	//5

		System.out.println("Object class");
	}
	
}

class Prog2 {
	
	public static void main(String[] args) {

		Demo obj = new Demo();
		
		obj.m1(10);
		// obj.m1(new Integer(10));
	}
}

//Autoboxing - conversion done from primitive to Wrapper class by the compiler -
//  This autoboxing can be seen in the bytecode (invokestatic) as compiler gives call to static method of Wrapper classes
//   e.g from int to Integer it is done as Integer.valueOf(int) - this valueOf(int) method returns object of Integer classes
//
//Unboxing - conversion done form Wrapper class to primitive by the compiler - 
// This unboxing can be seen in the bytecode (invokesvirtual) as compiler gives call to non-static method of Wrapper classes 
// e.g from Integer to int it is done as Integer.intValue() - this intValue() method returns value of Integer.

//Priority order of Primitive types -> Exact match -> upcast to bigger primitive -> Autobox -> call to Parent -> call to superclass
//Priority order of Reference types -> Exact match -> call to Parent ->  call to super class -> unboxing -> upcast to bigger primitive

//	******************When we pass primitives i.e(obj.m1(10) and comment obj.m1(new Integer(10)) to the method
//  while calling then it calls according to the Priority order of Primitive***************
//	
//	When we run the above code it first searches for the exact match and as exact match is found it gives call to the method m1(int)
//  - o/p : Int primitive
//
//	When we comment the the first method m1(int)
//	When we run the code again it first searches for exact match and as exact match is not found it upcast to 
// bigger primitives and as method with 'float' parameter is present it first converts '10' to float 
// i.e 10f(as int is not compatible with int- can be seen in bytecode) so that  it can  call to method with float - o/p: Float primitive
//
//	When we comment first two methods i.e m1(int) & m1(float)
//	WHen we run the code again exact match is not found + there is no parameter greater than primitive int ,
//  hence now as method 'm1(Integer)' is present compiler "AUTOBOXES" int to Integer(can be seen in bytecode
//   i.e call to static method of Integer valueOf(int) is given which returns object of Integer class) - o/p: Integer class
//
//	When we comment first three methods i.e m1(int) , m1(float), m1(Integer)
// //	When we run the code again exact match -> upcasts to bigger primitive -> Autobox are done and as after autoboxing 
// as there is no match it upcasts Integer to it's parent and give call to it as Number class is the direct parent of 
// Integer(as child is compatible with Parent) - o/p: Number class

//	When we comment first four methods i.e m1(int) , m1(float), m1(Integer), m1(Number)
//	When we run the code again exact match -> upcasts to bigger primitive -> Autobox -> upcast to Direct Parent are done and as
//  there is no match it gives call to m1(Object) as Object class is the superclass of Integer(as every class in java is compatible with parent) 
//  - o/p: Object class




//	****************When we pass references i.e(obj.m1(new Integer(10) and comment obj.m1(10)) to the method while calling
//  then it calls according to the Priority order of Referenceas mentioned above************ 


//	Exact same scenerio as above but based on priority of reference
//
//	Let's take scenerio when compiler does "Unboxing"
//	Here "UNBOXING" will be done by the compiler if we comment methods (m1(Integer), m1(Number) and m1(Object)) and as method m1(int) 
// is present compiler "UNBOXES" Integer to int(can be seen in bytedcode i.e call to non-static method of Integer intValue() is given which 
// returns int value) - o/p: Int primitive



