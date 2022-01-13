class BCCI{
    String name = "rohan";
    int age = 21;
    BCCI(){
        System.out.println("in BCCI constructor");
    }
}
class IPL extends BCCI{
    IPL(){
        System.out.println("in ILP constructor");
    }
    IPL(BCCI  obj){
        System.out.println("in parameterize constructor");
        System.out.println(obj.name);
        System.out.println(obj.age);

    }
}
class Demo{
    
    public static void main(String[] args) {
        BCCI b1 = new BCCI();

        IPL i1 = new IPL();
        
        IPL i2 = new IPL(b1);

        
    }
}