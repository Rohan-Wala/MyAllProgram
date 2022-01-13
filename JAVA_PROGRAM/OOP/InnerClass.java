//Inner classes 
//1) Normal inner class
//2) method local inner class
//3) static nested inner class
//4) Anonymous inner class
//
//
//


//Normal inner class
class IndianDefence {

    int a= 10;

    IndianDefence() {

            System.out.println("CDS Bipin Rawat");
    }
    //normal inner class
    class Army {
        Army() {

            System.out.println("Army class");
        }

            void attack() {

                    System.out.println("Uri Attack");
            }
    }

    class Navy {

            void attack() {

                    System.out.println("Ghazi Attack");
            }
    }

    class AirForce {

            void attack() {

                    System.out.println("Balakot Attack");
            }
    }
    void fun(){
        // in same class non static method
        AirForce a1 = new AirForce();
        a1.attack();
    }
    static void fun2(){
        //same class static method
        IndianDefence obj = new IndianDefence();
        AirForce af = obj.new AirForce();
        af.attack();
    }
}

//method local inner class
// class inside a method of a class
class outer{
        int a = 1;
        void o1(){
                System.out.println("in o1 method");
                class inner{
                        int b =2;
                        void i1(){
                             System.out.println("in inner class");
                             System.out.println("b = " + b);
                             System.out.println("a = " + a);
                        }
                }
                // the object of that class will be immediately class complet
                inner obj = new inner();
                obj.i1();
        }
}

// static nested inner class   
// it is same as normal inner class, the only diifernc is that the inner class is static  
class outer2{
        int a = 5;
        
        static class inner2{
                int b =6;
                void i1(){
                        System.out.println("in inner class");
                        System.out.println("b = " + b);
                }
        }
}

//anonymous inner class
class Trip{
        //anonymous inner class is uesd to override the method at runtime
        void place(){
                System.out.println("Kedarnath");
        }
}
class Innerclass {
        // Accessing from non-static method of other class
    void allClass() {

            IndianDefence obj = new IndianDefence();

            IndianDefence.Army obj1  = obj.new Army();
            obj1.attack();

            // IndianDefence.Navy obj3 = obj.new Navy();
            // obj3.attack();

            // IndianDefence.AirForce obj4 = obj.new AirForce();
            // obj4.attack();

    }

    public static void main(String[] args) {

        // IndianDefence obj1 = new IndianDefence();
        // Innerclass d = new Innerclass();
        // d.allClass();
        // IndianDefence.fun2();

        //method inner 
        // outer obj1 = new outer();
        // obj1.o1();

        // static nested inner class
        // outer2.inner2 o2 = new outer2.inner2();
        // o2.i1();

        //anonymous inner class
        //syntex
        Trip t1 = new Trip(){
                // it will creat an anonymous inner class
                // we can not write new method in this class, we can only override methods
                void place(){
                        System.out.println("kashi vishwanath");
                }
        };
        t1.place(); //kashi vishwanath
        // as we override the method it will git kashi vishwanath ,not a kedarnath
        // if we want to call method of trip class we have to creat another object of trip class
        Trip t2 = new Trip();
        t2.place(); // Kedarnath

        
        
    }
}