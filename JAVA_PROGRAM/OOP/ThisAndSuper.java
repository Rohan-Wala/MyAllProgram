import java.lang.reflect.Constructor;
/*
class Parent{
    int a = 10;
    String s = "AAAAA";
    Parent(){
        System.out.println("default constructor");
    }

    Parent(int a , String s){
        a = a ;
        s = s ;
    
    }
    void display(){
        // System.out.println(a);
        // System.out.println(s);
        System.out.println("in parent class");
    }
}
class Child extends Parent{
    int b;
    String ss;
    Child(){
        System.out.println("in child constructor");
    }
    Child(int b, String ss,int a , String s) {
        // super();
        this.b= b;
        this.ss = ss;
        
    }
    void display(){
        // System.out.println(b);
        // System.out.println(ss);
        System.out.println("in child class");
    }
}*/

//*******this or super on first line *******
class Parent{
    Parent(){
        System.out.println("in parent dafault");
    }
    Parent(int a){
        System.out.println("in parent para");
    }
}
class Child extends Parent{
    Child(){ 
        /*hear as we have written first line as this(10.2) it will no go for super() which is suppes to be the first line
        this(10.2) will search for constructor with float para and call that constructor
        in that constructor it will get super() as a first line and call parent default constructor
        that means for every child object parent class will call only once 
        */
        this(3); // this will go for constructor with int as para
        System.out.println("in child default");
    }
    Child(int x){
        this(10.2f); // this will go for constructor with float as para
        // super(); // it will give error as first line can only be this or super
        System.out.println("in child para");
    }
    Child(float a){
        // hear it will get super() as first line and it will call parent default constructor
        System.out.println("in child float para");
    }
}
class ThisAndSuper{
    public static void main(String[] args) {
        Child c1 = new Child();
        /*
        o/p
        in parent dafault
        in child float para
        in child para
        in child default
        */ 



    }
}