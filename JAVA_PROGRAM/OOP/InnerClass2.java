

class Outer {

    class Inner {

        void m1() {
            System.out.println("In m1");
        }
    }

    void m2() {

        Inner i = new Inner();
        i.m1();
    }

    public static void main(String[] args) {
        
        Outer o = new Outer();
        o.m2();
    }
}