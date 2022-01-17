import javax.sql.rowset.spi.SyncFactory;
import javax.swing.plaf.synth.SynthSplitPaneUI;

class A{
    // byte - short - char - int - long - float - double
    //mthods dose not have priority in this case
    void add(){
        System.out.println("no pare");
    }
    void add(float a , float b){
        System.out.println(a+b);
    }

    void add(Double a , double b){
        System.out.println(a+b);
    }

    void mult(float a){
        System.out.println(a*a);
    }
    void mult(double a){
        System.out.println(a*a);
    }
    /*
    o/p: for mult(2) : 4.0
    Explanation:

    1. When an exact match is not found for passing argument then the compiler finds the method with the smallest argument.
    2. In the above example, float and double both belong to float category data type. Due to which an exact match is not
        found for passing argument 2 because 2 is an integer data type.
    Therefore, the compiler finds the method with the smallest argument float rather than double.
    The float data type is a smaller size than double and consumes less memory.
    */


    
    // this 2 methods will creat an ambiguity for add(10 , 20)
    // because it may upcast any of them,it it will gat confused to which fun to call
    // void add (int a , float b){}
    // void add (float a, int b){}

    // this can take any number of argument of int type
    void add( int ...arg){
        //we can use for loop or for each
        System.out.println(arg[0]+ arg[1] + arg[2] + arg[3]);
    }
}


/* 
spacial case
when we pass object of 2 different class have a parent-child realationship as a parameter to function on overloading
and if we make a object of child by taking parent refernce the call will go to the method which have a obj of parent class
as overloading is a complie time polimorphsim
*/
class B{}
class C extends B{}
class D{
    void fun(B obj){
        System.out.println("in fun B");
    }
    void fun(C obj){
        System.out.println("in fun C");
    }
}
class demo{
    public static void main(String[] args) {
        A a = new A();
        // a.add(10,20,30,40,50,60);
        // a.mult(2);
        // a.add(10,'a'); // it will work for float-float , double-double , but ambiguity for float-float ,int-double

        B b1 = new C();
        D d1 = new D();
        d1.fun(b1); //in fun B

    }
}