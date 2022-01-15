class Parent{
    void property(){
        System.out.println("property");
    }

    void career(){ //overriden method
        System.out.println("doctor");
    }
}
class Child{
    void career(){ //overriden method
        System.out.println("doctor");
    }
}

class Demo{
    public static void main(String[] args) {
        Child c1 = new Child();
        c1.career();
    }
}