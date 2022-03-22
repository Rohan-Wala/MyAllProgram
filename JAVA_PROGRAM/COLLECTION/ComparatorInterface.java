import java.util.Comparator;
import java.util.TreeSet;

import javax.management.ObjectName;
import javax.naming.InterruptedNamingException;

// to sort string in treeset in revers order 
class Prog5{
    public static void main(String[] args) {
        TreeSet t = new TreeSet<>(new MyComparat());
        
        /* for string 
        t.add("Rohan");
        t.add("Rajat");
        t.add("Priyanshu");
        t.add("Shruti");
        t.add("Ria");
        */
        t.add(10);
        t.add(0);
        t.add(20);
        t.add(15);
        t.add(20);


        System.out.println(t);
    }
}
class MyComparat implements Comparator{
    /* for string
    public int compare(Object obj1, Object obj2){
        String s1 = (String)obj1;
        String s2 = obj2.toString();

        // return s2.compareTo(s1);
        return -s1.compareTo(s2);

    }*/

    // for intger
    public int compare(Object obj1, Object obj2){
        Integer i1 = (Integer) obj1;
        Integer i2 = (Integer) obj2;
        
        //out method 
        if(i1 < i2)
            return -1;
        else if(i1 > i2)
            return +1;
        else return 0;
        

        // other posible cases
        // return i1.compareTo(i2); // [0, 10, 15, 20] ascending
        // return -i1.compareTo(i2); // [20, 15, 10, 0]decending
        // return i2.compareTo(i1); //[20, 15, 10, 0]decending
        // return -i2.compareTo(i1); //[0, 10, 15, 20]ascending
        // return +1; //[10, 0, 20, 15, 20] insertion order
        // return -1; //[20, 15, 20, 0, 10]revers of insertion order

        // return 0; // [10]only first element 
    }
}