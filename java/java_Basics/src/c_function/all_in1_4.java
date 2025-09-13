package c_function;

import java.util.*;

public class all_in1_4 {

    public static void voidFun1() {
        System.out.println("(fun1) this is void function without parameter and return type.");
        return;
    }

    public static void void_fun2(int a, int b) {
        int sum = a + b;
        System.out.println("(fun2) this is void function with parameter but without return type.");
        System.out.println(" the sum of " + a + " and " + b + " is : " + sum);
        return;
    }

    public static int returnFun3() {
        int a = 9, b = 7;
        int sum = a + b;
        System.out.println("(fun3) in this function without parameter but with return type.");
        return sum;
    }

    public static int return_fun4(int a, int b) {
        int multi = a * b;
        System.out.println("(fun4) in this function with parameter and return type.");
        return multi;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the value of x : ");
        int x = sc.nextInt();
        System.out.println("enter the value of y : ");
        int y = sc.nextInt();

        voidFun1();
        void_fun2(x, y);
        System.out.println("the sum of 9 and 7 : " + returnFun3());
        System.out.println(" the multiplication of " + x + " and " + y + " is : " + return_fun4(x, y));
        sc.close();
    }
}
