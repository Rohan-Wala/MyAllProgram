/*
Thread = thread are light weight process within a process

Threads allows a program to operate more efficiently by doing multiple things at the same time.

Threads can be used to perform complicated tasks in the background without interrupting the main program.

The process of executing multiple tasks (also called threads) simultaneously is called multithreading.
The primary purpose of multithreading is to provide simultaneous execution of two or more parts of a program to make maximum use of CPU time.
A multithreaded program contains two or more parts that can run concurrently.
It enables programmers to write in a way where multiple activities can proceed simultaneously within a single application.

thread are unsynchronized in java ,so they mat execute at different time

//Java is Thread based Programming language
//JVM - is a process in OS
//The way like OS handles process same like that JVM handles threads
//THread - it is a light-weight process within a process
//MultiThreading - 

//1) By extends Thread class
//2) By implementing RUnnable Interface

//Steps:
//1) Creating object of class extending Thread class
//2) calling start()
//3) overriding run() method of Thread class

//Thread class is present lang 
*/

class MyThread extends Thread{
    // giving priority to main thread
    // static Thread threadname = null;
    public void run(){
        // try {
        //     threadname.join();
        // } catch (InterruptedException e) {
            
        // }
       
        System.out.println("in thread");
        for(int i= 0;i<5;i++)
            System.out.println(Thread.currentThread().getName());
    }

}

class MyThread2 extends Thread{
    public void run(){
        System.out.println("in 2nd thread class");
    }
}

/*
some methos of thread class
1) Thread.Sleep(time in mili sec);
2) thread.join();
3) thread.yield();
*/

class demo{
    public static void main(String[] args) throws InterruptedException {
        System.out.println(" in main");
        MyThread mt = new MyThread();
        mt.start();
        
       
       

        //therad. sleep();
        // mt.sleep(2000);

        // thread.join()
        //this is bacially used to give priority ti thread over other thread
        // mt.join();
        // mt2.join();
        // in this case main will not start it's excution until mt complet it's execution

        // MyThread.threadname = Thread.currentThread(); // passing the name of main thread

        //thread.yield();
        /*
        a yield() is static method of thread class & it can stop exceution of current exceuting thread and  will give a 
        chance to other waiting thread of the same priority
        if our current thread taken more time to exceute it will allocate process to other thread 

        but if there is not any waiting thread or thread will very low priority  in that case out thread will continue it's exceution
        */
        // mt.yield();
        for(int i= 0;i<5;i++)
            System.out.println(Thread.currentThread().getName());

    }
}