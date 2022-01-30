/*
How JVM handle an Exception?

Default Exception Handling : Whenever inside a method, if an exception has occurred, the method creates an Object known as 
    Exception Object and hands it off to the run-time system(JVM). 
The exception object contains name and description of the exception, and current state of the program where exception has occurred. 
Creating the Exception Object and handling it to the run-time system is called throwing an Exception.
There might be the list of the methods that had been called to get to the method where exception was occurred. 
This ordered list of the methods is called Call Stack.Now the following procedure will happen.

The run-time system searches the call stack to find the method that contains block of code that can handle the occurred exception. 
The block of the code is called Exception handler.
The run-time system starts searching from the method in which exception occurred, proceeds through 
call stack in the reverse order in which methods were called.
If it finds  appropriate handler then it passes the occurred exception to it.
    Appropriate handler means the type of the exception object thrown matches the type of the exception object it can handle.
If run-time system searches all the methods on call stack and couldn’t have found the appropriate handler 
    then run-time system handover the Exception Object to default exception handler , which is part of run-time system. 
This handler prints the exception information in the following format and terminates program abnormally.

Object->Throwable->Exception->RunTimeException

*/

/*
try catch
own message
try with multipal catch
finally
nested try catch
own exception class
*/

import java.util.Scanner;

// making own exception class
class MyException extends RuntimeException{ // for compile time exception extendes Exception
    String msg = null;
    MyException(String msg){
        this.msg = msg;
    }
    public String toString(){
        return msg;
    }
}
class demo{
    static{
        System.out.println(" static block run at first ,even befor main ");
    }
    void m1(){
        System.out.println("in m1 method");
    }
    public static void main(String[] args) {
        System.out.println("start of main");


        //basic sysntex for try and catch to handel an exception

        // try{
        //     System.out.println(10/0);
        // }catch(ArithmeticException ae){
        //     System.out.println("chatch an exception");
        // }

        // try{
        //     System.out.println(10/0);
        //     // Thread.sleep(2000);
        // }catch(ArithmeticException ae){ 
        //     // hear we want to handel an ArithmeticException but we are passing an object of an nullpointer exception
        //     // the argument to catch block mush be the exception which we want to handel
        //     /// otherwise at runtime the exception will handel by JVM not try-catch block
        //     System.out.println("chatch an exception");
        // }

        // how to get own exception messages
        // PrintStackTerace() = exception name + decsription + stack strace
        // toString() = exception name + decsription , it return string
        // getMessage() = description , it return string  
 
        // try {
        //     System.out.println("in try bolck");
        //     System.out.println(10/0);
        // } catch (ArithmeticException e) {
        //     System.out.println("in catch bolck");
        //     System.out.println(e.getMessage());
        // }

        //try with multipul catch block
            // Scanner sc = new Scanner(System.in);
            // System.out.println("enter one number 1 or 2");
            // int num = sc.nextInt();

            // try {
            //     if(num == 1)
            //         System.out.println(10/0);
            //     else if(num == 2){
            //         demo d1 = null;
            //         d1.m1();
            //     }
            // }catch (NullPointerException ae) {
            //    System.out.println("arithmetic exception catched");
            // }catch (Exception ne) {
            //     System.out.println("null pointer exception catched");
            //  }

             /* 
              if we give obj of parent class of run time exception in first catch block , and runtime exception in 2nd catch block 
                it will give error as first catch block is capable of handeling all run time exception
                try {}
                }catch (Exception ae) { // parent in 1st catch
                }catch (NullPointerException ne) { // child in 2nd catch
                }

                but vise-versa case wroks
                try {}
                }catch (NullPointerException ae) { // child in 1st catch
                }catch (Exception ne) { // parent in 2nd catch
                }

             */


             // finally block  == this () is used as clean up code
             // this block will executa after code gose in try or catch block 
            // try{
            //     System.out.println(10/0);
            // }catch(ArithmeticException ae){
            //     System.out.println("chatch an exception");
            // }finally{
            //     System.out.println("in finally block ");
            // }


            // nested try - catch block
            // try {
            //     System.out.println("in outer try block");
            //     System.out.println(10/0);
            // } catch (ArithmeticException e) {
            //     System.out.println("in outer catch block");
            // }finally{
            //     System.out.println("in outer finally block");
            //     try {
            //         System.out.println("outer finally inner try");
            //         demo d = null;
            //         d.m1();
            //     } catch (NullPointerException e) {
            //         System.out.println("outer finally inner catch");
            //     }
            // }



            //handeling exception with own exception class
            try {
                System.out.println("inter your age");
                int age = Integer.parseInt(System.console().readLine());
                if(age > 150)
                    throw new MyException("abee sale ,thik se daaal");
                else if(age < 1)
                    throw new MyException("abee sale ,thik se dekh ke daaal ");
                else
                    System.out.println("welcome to new world");
            } catch (MyException me) {
                System.out.println("in catch block ,exception handeled");
                System.out.println(me.toString());
            }finally{
                System.out.println("finally  in finally block");
            }

        System.out.println("end of main");
    }
}
// Execution Order of Java
// 1. Static block
// 2. Static Method
// 3.  Init block
// 4.Constructor
// 5. Instance Methods
