//composion
// in which your class can have a instance if another calss as a member of class?
// calss B has a object of class A   = has a relationship
// in inharitance  = is a kind of relationship
class A{
    int a = 10;
    void m1(){
        System.out.println("in A class");
    }
}
class B{
    int b = 120;
    A obj = new A();
    void m2(){
        obj.m1();
        System.out.println(b);
        System.out.println("in B class");
        System.out.println(obj.a);
    } 
}
class demo{
    public static void main(String[] args) {
        B b = new B();
        b.m2();
    }
}