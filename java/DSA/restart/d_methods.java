public class d_methods {

    public static void addtion(int a, int b) {
        System.out.println("a+b : " + (a + b));
    }

    public static int subtraction(int x, int y) {
        return (x - y);
    }

    public static void main(String args[]) {
        int a, b;
        a = 23;
        b = 24;
        addtion(a, b);
        System.out.println("a-b : " + subtraction(a, b));
    }
}
