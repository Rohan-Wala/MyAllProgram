import java.util.ArrayList;
import java.util.Iterator;
import java.util.ListIterator;

//Create a arrayList(al1) of String type:
//add 5 objects - "Rajat","Raja","Raj","Ra","R"
//Print - Iterator - 
//remove 2      - "R", "Ra"
//Print - ListIterator - 

//Create another arrayList(al2) of String type:
//add 2 objects - "Raj", "Raja"

//add all objects of al2 in al1
//Print - SOP


class Practice {
    public static void main(String[] args) {
        ArrayList<String> al1 = new ArrayList<>();
        al1.add("Rajat");
        al1.add("Raja");
        al1.add("Raj");
        al1.add("Ra");
        al1.add("R");

        Iterator i = al1.iterator();
        while(i.hasNext()){
            System.out.println(i.next());
        }
        System.out.println("******************************");
        al1.remove("R");
        al1.remove("Ra");
        
        ListIterator li = al1.listIterator();
        while(li.hasNext()){
            System.out.println(li.next());
        }
        System.out.println("******************************");
        
        ArrayList<String> al2 = new ArrayList<>();
        al2.add("Raj");
        al2.add("Raja");

        al1.addAll(al2);
        System.out.println(al1);
        al1.retainAll(al2);
        
        System.out.println(al1);
    }
}