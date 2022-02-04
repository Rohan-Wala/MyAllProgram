import java.util.Stack;

//stack it is a class
// it extends Vector so we can also use method of vector
class prog4{
    public static void main(String[] args) {
        Stack s = new Stack<>();

        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);

        System.out.println(s);
        //pop() poping one element
        // s.pop() //this also work
        System.out.println(s.pop());
        
        System.out.println(s);
        
    
        
        //peek() geting the topmost element 
        System.out.println(s.peek());
        
        System.out.println(s);

        //search() // give the positon from top
        System.out.println(s.search(20));

    }
}