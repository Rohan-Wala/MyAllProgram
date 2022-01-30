import java.lang.reflect.Array;
import java.util.ArrayList;

//common methods we can use in list ,stack,vector,queue

class prog2{
    public static void main(String[] args) {
        ArrayList<Integer> al1 = new ArrayList<>();

        // 1)add 
        al1.add(10);
        al1.add(20);
        al1.add(30);
        // al1.add("ROHAN");
        // al1.add(20.5f);


        // 2)remove 
        al1.remove("20.5f");
        // al1.remove(new Integer(10)); // ad arraylist as 2 method 1)remove(obj ) from collcetion and 1)remove(int index) from arraylist
        //we need to spacify which method we want to use 
        // if we use al1.remove(10) it will take 10 as a indedx not an value, this problem is noly with integer


        ArrayList al2 = new ArrayList<>();
        al2.add(40);
        al2.add(50);

        // 3)addAll()  add all element of al2 into al1
        al1.addAll(al2);

        // 4)removeAll() remove alll obj from al1 which are present in al2 
        al1.removeAll(al2); 

        // 5) clear() remove all the element 
        // al1.clear();

        // 6) retainAll() keep element which are present in al2 and remove every other 
        // al1.retainAll(al2);
        // eg al1 = [10,20,30,40,50]
        // al2 = [40,50]
        // al1 after al1.reatainAll(al2) =[40,50]

        // 7)size() give a size 
        // System.out.println(al1.size());

        // 8) isEmpty() to check if it is empty ot not  return 1/0
        // System.out.println(al1.isEmpty());
        
        // 9)contains() to check if element is present or not return 1/0
        // System.out.println(al1.contains(new Integer(20)));

        // 10) constainsAll() to ckeck if all element of collcetion are there or not 
        // System.out.println(al1.containsAll(al2));

        // 11)Objcet toArray() convert list into array of type Object
        Object[] arr = al1.toArray();
        for(int i=0;i<arr.length;i++)
            System.out.println(arr[i]);


        System.out.println(al1);
        System.out.println(al2);
        
    }
}s