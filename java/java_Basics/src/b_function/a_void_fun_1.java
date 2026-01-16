package b_function;

import java.util.*;

public class a_void_fun_1 {
    public static void addtion(int a, int b) {
        int sum = a + b;
        System.out.print("sum of a and b = " + sum);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the value of a and b :");
        int a = sc.nextInt();
        int b = sc.nextInt();
        addtion(a, b);
        sc.close();
    }
}
