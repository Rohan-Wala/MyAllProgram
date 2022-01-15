/*
interface is like abstract only
in this every method is abstract accept default and ststic
 compiler make .class file also for interface
class - interface = implement
interface - interface = extends
class - class = extends
interface - class = dose not work
*/
/*
1) normal interface
2) default and static method
3) nested interface
4) interface inside class
5) variable in interface
6) anonymous inner class
7) marker interface/tage interface = interface which dose not have any method in it is call as marker interface 
    thay provide runtime information to java ,eg  java.io.Serializable , Cloneable and Remote interface;
*/

//normal interface

interface Surat{
    void price();

    /* in later version of java(after 1.8) we can also give body to method in interface by using default or static
     ** but there is a diifernce between default and static method
     - when we implements an interface all default method method will go to child class
     - but as static method belaung to only class , static method will not go to child class 
     we have to call ststic method of interface by using interface name only
    */
    //default method
    default void quality(){
        System.out.println("in default m2 method");
    }

    //static method
    static void m3(){
        System.out.println("in stsatic m3 method");
    }
    
}
class Pune implements Surat {
    // void m1(){}  // this will give error as each method in interface is public and we cant decrease the scope of method
    public void price(){
        System.out.println("2000");
    }
}
class Mumbai implements Surat{
    public void price(){
        System.out.println("1500");
    }
}

//nested interface
// it is same is nested classes
interface outer{
    int d = 10; // we can also use variable in interface
    void outerm1();
    interface inner{
        void innerm1();
    }
}
interface outer2{
    // int d = 20;
    void outerm1();
}

//  if implement only outer it will not include inner interface 
//  to do so we need to do outer.inner
class A implements outer,outer.inner , outer2{
    void display(){
        System.out.println("value of D = "+ d); // this will create an ambiguty as variable is in both interface outer and outer2
    }
    @Override
    public void outerm1() {
        System.out.println("in outer m1");
    }
     @Override
     public void innerm1() {
         System.out.println("in outer m1");
     }

}




//interface inside a class 
class Z{
    void n1(){
        System.out.println("in class m1");;
    }
    interface X{
        void n2();
    }
}
class R extends Z implements Z.X{ // as X inside a class to implements it we need to use Z.X
    // as r extends r it will have n1 method but not interface in it,we have include interface
    public void n2(){
        System.out.println("in n2 method");
    }
}


 // anonymous inner class using interface
interface Player{
    void batsman();
}

class DEMO{
    public static void main(String[] args) {
        // Pune p1 = new Pune();
        // p1.price(); // in m1
        // p1.quality(); // calling default method

        // Mumbai m1 = new Mumbai();
        // m1.price();
        // m1.quality();
        // A.m3(); // calling static method

        // A a1 = new A();
        // a1.outerm1(); 
        // a1.innerm1();
        // a1.display();
        
        // outer a2 = new A();
        // a2.outerm1();
        // a2.innerm1(); // by using a2 we can not call method in inner interface 

        // R r1 = new R();
        // r1.n1();
        // r1.n2(); 


        //  creating anonymous class using interface 
        Player obj = new Player(){
            public void batsman(){
                System.out.println("in anonymous inner class");
            }
        };
        obj.batsman();

    }
}