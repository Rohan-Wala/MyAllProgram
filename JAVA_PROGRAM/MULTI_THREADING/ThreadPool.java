// thread pool
import java.util.concurrent.*;

class MyThread extends Thread{
    String workNum = null;

    MyThread(String workNum){
        this.workNum = workNum;
    }
   public void run(){
       System.out.println(Thread.currentThread().getName()+ ": start task" + workNum);
       try {
           sleep(2000);
       } catch (InterruptedException e) {
           
       }
       System.out.println(Thread.currentThread().getName()+ ": end task");
   }
}

class Pdemo{
    public static void main(String[] args) {
        // ExecutorService exec = Executors.newFixedThreadPool(10);
        // this line will create a thread pool of fix number of thread ,in this case it is 10
        // if we have 20 work to do ,for the first 10 task eack thread will get a work
        // but for 11th task ,it will wait for any thread to get free, until that all task will wait
        
        // ExecutorService exec = Executors.newCachedThreadPool();
        //unlike newFixedThreadPoll, newCachedThreadPool this will create a new thread for eack task
        // if we have 20 task it will cereate 20 thread  
        
        ExecutorService exec = Executors.newSingleThreadExecutor();
        for(int i=0; i<20;i++){
            MyThread work = new MyThread(" "+i);
            exec.execute(work);
        }
        exec.shutdown();
    }
}