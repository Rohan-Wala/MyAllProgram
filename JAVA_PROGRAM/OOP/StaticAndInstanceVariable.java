class IPLPlayer{
	String name = "ROHAN"; //instance
	int run = 100;			//instance
	static int total_run = 200;//static
	 
	void display(){
		System.out.println("name is " + " " + name);// access to instance variable in same calss instance method ->direct 
		System.out.println("run is " + " " + run);// access to instance variable in same calss instance method ->direct 
		System.out.println("total run is " + " " + total_run);// access to static variable in same calss instance method ->direct 
	} 
	static void display2(){
		IPLPlayer i1 = new IPLPlayer();
		System.out.println(" run is " + " "+ i1.run);// access to instance variable in same calss static method ->object.variable 
		System.out.println("total run is " + " "+ total_run);// access to static variable in same calss static method ->direct
	}
	
}

class StaticAndInstanceVariable{
	String name2 = "ABCD"; //instance
	int run2 = 300;			//instance
	static int total_run2 = 500;//static
	
	
	void display3(){
		IPLPlayer i3 = new IPLPlayer();
		System.out.println("name is " + " " + name2);
		System.out.println("run is " + " " + run2);	// access to instance variable in same calss instance method ->direct 
		System.out.println("total run is " + " " + total_run2);// access to static variable in same calss instance method->direct 
		System.out.println("total run is " + " " + i3.run);// access to instance variable in differrnct calss instance method ->object.variable
		System.out.println("total run is " + " " + IPLPlayer.total_run);// access to static variable in differrnct calss instance method ->classname.variable

	} 

	public static void main(String[] args){
		IPLPlayer i2 = new IPLPlayer();
		i2.display();
		i2.display2();
		
		StaticAndInstanceVariable s1 = new StaticAndInstanceVariable();
		s1.display3();
		System.out.println("name is " + " " + i2.name); //access to instance variable in differrnct  calss  static method ->object.variable
		System.out.println("total run is" + " " + i2.total_run); //access to instance variable in differrnct  calss  static method ->object.variable
		System.out.println("total run is " + " " + IPLPlayer.total_run);// access to static variable in differrnct calss  static method ->classname.variable
	}
	
}