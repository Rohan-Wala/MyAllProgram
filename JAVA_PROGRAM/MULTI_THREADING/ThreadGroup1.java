/*
thread group - they are basically group of different thread stored under same name

if we want to apply ant method to all the thread ,we have to explicitly give it to each thread 
but by using thread group we can apply it to all thread at the same time 

in thraed group it has tree like structure ,and we can have thread group under thread group,and thread also
        tg (parent thread group)
    tg2     t1
t2,th3     th5,th5
*/
// import java.lang.ThreadGroup;

class GroupThread extends Thread{
    GroupThread(ThreadGroup tg , String name){
        // to add thrad in thread group we have to call constructor with paremeter as thread group name and name of thread
        //  for that in constructure we have to call super mwthod with parameter,else it call noraml super(),and that cread normal thread not
        super(tg,name);
    }
    public void run(){
        System.out.println(currentThread().getName());
    }
}
class GDEMO{
    public static void main(String[] args) {
        ThreadGroup tg = new ThreadGroup("parent thread");// creating thread group with name

        GroupThread th1 = new GroupThread(tg, "first thread"); // thread group name and thread name
        GroupThread th2 = new GroupThread(tg, "second thread"); // thread group name and thread name

        ThreadGroup tgs = new ThreadGroup(tg,"1ThreadG"); // adding thread group to thread group

        // System.out.println(tg.activeCount()); // this will give the count of active thread in our group //0
        // currently there are no ant active thread because we havent start the thread
        
        th1.start();
        th2.start();
        
        // System.out.println(tg.activeCount()); // this will give the count of active thread in our group //2

        // System.out.println(tg.activeGroupCount()); //this will give the count of active thread group in our group
        // tg.destroy(); //this will destroy TG
        System.out.println(tg.isDestroyed());  // to check if TG is destroyed
        
        System.out.println(tg.getMaxPriority());  // This method returns the maximum priority of the thread group.

        // tg.interrupt(); //This method interrupts all threads in the thread group
        // tg.suspend();// This method is used to suspend all threads in the thread group.
        // tg.resume(); //This method is used to resume all threads in the thread group which was suspended using suspend() method.
        // tg.stop()// 	This method is used to stop all threads in the thread group.

        System.out.println("in main");


    }
}