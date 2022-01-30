import java.nio.channels.ClosedSelectorException;
import java.util.Enumeration;
import java.util.Iterator;
import java.util.ListIterator;
import java.util.Vector;

import javax.swing.tree.VariableHeightLayoutCache;

// // cursors
// 1) Enumeration
// 2) Iterator
// 3) ListIterator

class Prog1{
    public static void main(String[] args) {
        // Vector v1 = new Vector<>(); // this will create vector in which heterogeneous obj are allowed
        // but this may craete a problem at run time so we use homogeneous data
        Vector<String> v1 = new Vector<>(); //only string are allowed 

        v1.add("ROHAN");
        v1.add("ABC");
        v1.add("XYZ");

        //enumerator work only on vector and stack
        // Enumeration e = v1.elements();
        // while(e.hasMoreElements()){
        //     System.out.println(e.nextElement());
        // }

        /*Iterator i = v1.iterator();
        while(i.hasNext()){
            String s = (String)i.next();
            if(s.equals("XYZ"))
                System.out.println("helloooo");
        }*/

        ListIterator li = v1.listIterator();
        /*
        public abstract boolean hasNext();
        public abstract E next();
        public abstract boolean hasPrevious();
        public abstract E previous();
        public abstract int nextIndex();
        public abstract int previousIndex();
        public abstract void remove();
        public abstract void set(E);
        public abstract void add(E);
        */
        while(li.hasNext()){
            System.out.println(li.next());
        }

        System.out.println(v1);

    }
}