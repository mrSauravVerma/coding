package c_function;

import java.util.*;

public class with_argu_2 {
    public static void enterArr(int n) {
        for (int i = 0; i < n; i++) {
            System.out.println("these line print by function.");
        }
        return;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of line : ");
        int n = sc.nextInt();
        enterArr(n);
        sc.close();
    }
}
