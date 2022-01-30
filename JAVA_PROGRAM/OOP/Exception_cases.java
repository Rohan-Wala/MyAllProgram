// exception cases

/*
run time exception
1)ArithmeticException
2)NullPointerException
3)IndexOutOfBoundsException
    1)ArrayIndexOutOfBoundsException
    2)StringIndexOutOfBoundsException
4)InputMismatchException
5)NumberFormatException

compile time exception 
1) IOException
*/
import java.io.*;
import java.util.Scanner;
class ExceptionDemo{
    void fun(){
        System.out.println("befor fun");
        gun();
        System.out.println("after gun");
    }
    static void gun(){
        System.out.println("in gun");

        // System.out.println(10/0); //ArithmeticException /* any worng arithmatic calculation  */
    }
}

class DEMO1{
    public static void main(String[] args)  {
        // ExceptionDemo e1 = new ExceptionDemo();
        // e1.fun();
        
        // ExceptionDemo e2 = null; 
        // e2.fun(); //NullPointerException when obj of class is null and we try to call any method by using that object

        // int arr[] = {10,20,30,40};
        // String s1 = "ROHAN";
        // System.out.println(arr[4]); //ArrayIndexOutOfBoundsException when we try to access any index out of range of that array
        // System.out.println(s1.charAt(5));//StringIndexOutOfBoundsException =  same as ArrayIndexOutOfBoundsException but for string

        // Scanner sc = new Scanner(System.in);
        // sc.nextInt(); //InputMismatchException = expected int, and if we give any other input then int  

        // BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        // int i = Integer.parseInt(br.readLine());//NumberFormatException = expected int, and if we give any other input then int 
        // // this is also same as InputMismatchException but this is for bufferedReader

        // Object o = new Object();
        // String s = new String();
        // String s2 = (String)o; //ClassCastException trying to cast bigger class into smaller class
        // trying to cast object class in to string

        System.out.println("befor fun");
        Thread.sleep(5000);
        System.out.println("after fun");    
    }
    
}
