import java.io.*;

class Demo1 {

	public void m1(){

		System.out.println("In Demo1 m1");

	}

}

interface Demo2 {

	default void m1(){

		System.out.println("In Demo2 m1");

	}

}  

/*class A extends Demo1 implements Demo2 {



}*/

class Test{

	public static void main(String[] args){

		//A obj1 = new A();		
		//Demo1.m1();

	//	obj1.m1();

		//obj1.m2();


	}

}