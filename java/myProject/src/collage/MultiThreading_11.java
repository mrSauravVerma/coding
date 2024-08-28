package collage;

class AscendingThread extends Thread {
    public void run() {
        for (int i = 1; i <= 10; i++) {
            System.out.println(i);
        }
    }
}

class DescendingThread extends Thread {
    public void run() {
        for (int i = 10; i >= 1; i--) {
            System.out.println(i);
        }
    }
}

public class MultiThreading_11 {
    public static void main(String[] args) {
        AscendingThread ascThread = new AscendingThread();
        DescendingThread descThread = new DescendingThread();

        ascThread.start();
        descThread.start();
    }
}

