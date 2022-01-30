import java.util.ArrayList;

import javax.lang.model.element.Element;

// list is interface which extends Collection
// this methids we can use wit ArrayList, LinkedList,vector and stack

//as list has both duplicate element and it also mentain the order of elements index is most imp while maintaining list
// so most of the method of list are index based
class Prog2{
    public static void main(String[] args) {
        ArrayList a1 = new ArrayList<>();

        a1.add(10);
        a1.add(20);
        a1.add(30);
        a1.add(10);
        a1.add(20);

        // 1)add(index , element) add element at specific location
        a1.add(1,40);
        System.out.println(a1);
        //2) add(index, element) add collcection at specific location
        // ArrayList a2 = new ArrayList<>();
        // a2.add(100);
        // a2.add(200);
        
        // a1.addAll(0, a2);
        // System.out.println(a1);

        //3)remove(index) remove index from specific location 
        // a1.remove(3);
        // System.out.println(a1);

        // 4)indexOf(element)  give index for first occurance of element
        System.out.println(a1.indexOf(10)); // 0

        // 5) lastIndexOf(o) give index of last occrance of  Element
        System.out.println(a1.lastIndexOf(10)); // 4

        // 6) get(index) get value at specific index
        System.out.println(a1.get(4));

        // 7) set(index , value) set value at index 
        a1.set(4, 300);
        System.out.println(a1);


    }
}