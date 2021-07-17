class IPL{
	int id ;
	String name;
	IPL(int i,String n){
		id  = i;
		name = n;
	}
	void display(){
		System.out.println(id + " "+ name);
	}
}
class ParameterizedConstructor{
	public static void main(String[] args){
		IPL i1 = new IPL(1,"rohan");
		i1.display();
	}
}