import java.util.Scanner;

public class g_function {

    public static void voidFun() {
        System.out.println("this is void function with no parameter and no return type.  end");
    }

    public static void voidReturn(int x, int y) {
        System.out.println("this is void function with parameter and no return type ");
        int sum = x + y;
        System.out.println(" the sum of X + Y is : " + sum + " end");
    }

    public static int intFun() {
        System.out.println("This is int function with no parameter and with return type ");
        return 10;
    }

    public static int intReturn(int x, int y) {
        System.out.println("This is int function with paramereter and with return type ");
        return x * y;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the value of x : ");
        int a = sc.nextInt();
        System.out.print("enter the value of y : ");
        int b = sc.nextInt();

        voidFun(); // 1.NO paremeter and NO return type

        voidReturn(a, b); // 2.with perameter and NO return type

        // 3.NO perameter and with return type
        System.out.println(" the value returned by intFun is : " + intFun() + " end");

        // 4.with perameter and with return type
        System.out.println("The value returned by intReturn is : " + intReturn(a, b) + " end");

        sc.close();
    }
}
