class Animal{
	void eating(){
		System.out.println("eating...");
	}
}
class Dog extends Animal{
	void bark(){
		System.out.println("barking...");
	}
}
class SingleInheri{
	public static void main(String[] args){
		Dog d = new Dog();
		d.eating();
		d.bark();
	}
}
