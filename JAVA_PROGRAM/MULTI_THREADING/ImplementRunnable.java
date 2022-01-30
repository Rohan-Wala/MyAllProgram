class MyThread implements Runnable{
    public void run(){
        System.out.println("in my thread class");
        System.out.println(Thread.currentThread().getName());
    }
}
class ImplementRunnable{
    public static void main(String[] args) {

        // creating a thread by implementing runnable interface is same as using thread class
        // but the runnable interface dose not havr start() ,so we can't start thread in normal way
        // to start the thread we have to creat a  object og therad class and give an object of our class as an argument
        // and then call the start() , rest every  thing is same

        System.out.println("in main class");
        System.out.println(Thread.currentThread().getName());
        MyThread mt = new MyThread();
        Thread th = new Thread(mt);
        th.start();
        
    }
}