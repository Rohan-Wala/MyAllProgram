class DaemonThread extends Thread{
    public void run(){
        for(int i=0;i<10;i++)
            System.out.println((Thread.currentThread().getName()));
    }
}
class DDemo {
    public static void main(String[] args) {
        DaemonThread dt = new DaemonThread();
        DaemonThread dt2 = new DaemonThread();

        //to make any thread daemon thread we have to use steDaemon()
        // ** and we have to do it befor starting the thread;
        dt.setDaemon(true);
            // daemon thread life space is till execution of user define thread 
            // once our thread gets pop the daemon thread will also pop
        
        dt.start();
        dt2.start();
        for(int i=0;i<10;i++)
            System.out.println("in main thread");

        // we can also check is there any thread is daemon thread or not by using isDaemon();
        System.out.println(dt.isDaemon()); // true 
        System.out.println(dt2.isDaemon()); // false

    }
}