
/*
overriding is happen when one method from parent calss is rewritten in child class
 when child id not satisfied with method write in prarent class child class rewrite that method
 */
class Parent{
    void property(){
        System.out.println("property");
    }
    void career(){ // overriden method
        System.out.println("doctor");
    }
    /*
    return type cases
    the return type of any method can be as object of class also
    when any overrien method has return type the same return should be there in overrided method  
    but the return type of overrided method can be smaller then overriden method
    eg- if parent class method has return type as object the child class method may have return type as object(that is same)/(or smaller) string/int ... 
    strin - object 
    */
    Object m1(){ // overriden method
        System.out.println("in m1 method parent, return type");
        return null;
    }



    /*
        access spacifier
        method can have access spacifier to
        but in overriding the access spacifier of overrided method should be equal or greater then access spacifer of overriden method
        public - any where
        protected - same package or on different package it must have parent-child relation
        default - same package
        private - same class

        eg1) if overriden method is public so the overrided method must be public
        eg2) if overriden method is protected so the overrided method must be protected/public.
        ge3) if overriden method is default and overrded method is protected it will give an error
    */

    public void m2(){ // overriden method
        System.out.println("in m2 method parent, access ");
    }

}
class Child extends Parent {
   /* void career(){ // overrided method
        System.out.println("Engg");
    }

    String m1(){ // overrided method
        System.out.println("in m1 method child, return type");
        return null;
    }
    */

    public void m2(){ // overrided method
        System.out.println("in m2 method child, access ");
    }
}
class Deom{
    public static void main(String[] args) {
        Child c1 = new Child();
        c1.m2();
    }
}