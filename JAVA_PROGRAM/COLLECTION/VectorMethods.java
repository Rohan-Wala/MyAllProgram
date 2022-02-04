// Vector - It is exactly same as ArrayList with a single difference that ArrayList is non-synchronized while Vector is synchronized 
//          It implements Serializable , Cloneable and RandomAcess Interface    
//
//
// Constructors of Vector: 
//
// 1) Vector v = new Vector();
//      initial capacity = 10;
//      new capacity = old capacity * 2 = 10 * 2 = 20
//
// 2) Vector v = new Vector(int initialCapacity);
//      1000 
//      
//
// 3) Vector v = new Vector(int initialCapacity, int incrementalCapacity)
//      new Vector(1000,5);
//
//      1000 + 5 = 1005
//
// 4) Vector v = new Vector(Collection c);
//      

//Collection
//List

//Vector specific method - 1.0 -> 1995
//

import java.util.*;

class Prog3 {

        public static void main(String[] args) {

                Vector v = new Vector();

                //ADD

                v.add(10);      //Collection-I
                v.addElement(20);       //Vector

                v.add(2,30);    //List-I
                v.insertElementAt(40,3);        //insertElementAt(Object,index) - Vector

                System.out.println(v);


                /*
                //Remove
                
                v.remove(new Integer(10));      //Collection
                v.removeElement(new Integer(20));       //Vector


                //[30,40]
                v.remove(0);    //List


                //[40]
                v.removeElementAt(0);   //vector        

                */

                //v.clear();    //Collection

                //v.removeAllElements();        //Vector



                //To access element

                /*
                System.out.println(v.get(0));   //List

                System.out.println(v.elementAt(0));     //vector
        
                System.out.println(v.firstElement());   //10
                System.out.println(v.lastElement());    //40
                */


                //To set element
                v.set(2,100);   //List
                v.setElementAt(200,0);  //List

                //Extra methods
                //capacity()
                //Enumeraton elements()

                System.out.println(v.capacity());


                System.out.println(v);





        }
}