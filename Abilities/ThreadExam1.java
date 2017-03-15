// Implements of Interface (Runnable) to create Thread (java.lang.Runnable)

class A implements Runnable {
	public void run() { //overriding on the constructor of class with constructor of class Runnable which is Implemented already
		int i;

		for ( i = 0; i < 10; i ++ ) {
			System.out.println("Thread A:" +i);
		}
	}
}

class B implements Runnable {
	public void run() { 
		char A;

		for ( i = 65; i <= 95; i ++ ) {
			System.out.println("Thread B:" +(char)i);
		}
	}
}

public class ThreadExam1 {
	public static void main(String[] args) {
		Thread t1 = new Thread(new A());  //in arguments constructor of class A
		Thread t2 = new Thread(new B());  //------

		t1.start(); //start() is fuction of class Thread to start threading
		t2.start();
	}
}