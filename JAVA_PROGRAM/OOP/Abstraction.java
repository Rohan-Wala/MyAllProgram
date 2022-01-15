/*
Data Abstraction is the property by virtue of which only the essential details are displayed to the user. 
The trivial or the non-essentials units are not displayed to the user. 
Ex: A car is viewed as a car rather than its individual components.

1)An abstract class is a class that is declared with an abstract keyword.
2)An abstract method is a method that is declared without implementation.
3)An abstract class may or may not have all abstract methods. Some of them can be concrete methods
4)A method defined abstract must always be redefined in the subclass, thus making overriding compulsory
 OR either make the subclass itself abstract.
5)Any class that contains one or more abstract methods must also be declared with an abstract keyword.
6)There can be no object of an abstract class. That is, an abstract class can not be directly instantiated with the new operator.
7)An abstract class can have parameterized constructors and the default constructor is always present in an abstract class.
8) if child class does not want to give body to the abstract method of parent class,then child class will be also declare as abstreact,
    then that child will be get extend by ant other class and that class will dive body to that class 
*/

abstract class SPPU{
    abstract void exam();
    // abstract void exam(){
    //     System.out.println("dwqqw");
    // }
    // this will givw error as anstract shoule not be concreat
    
    void timetable(){
        System.out.println(" IN FEB");
    }
    
}
class RMD extends SPPU{
    void exam(){
        System.out.println("last date is 20 jan");
    }
}
class Demo{
    public static void main(String[] args) {
        RMD obj1 = new RMD();
        obj1.exam();
        obj1.timetable();
    }
    
}