package b_function;

import java.util.*;

public class d_floyd_triangle_13 {

    public static void floyd_triangle(int n) {
        int num = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(num + " ");
                num++;
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the line of Floyd's triangle :");
        int n = sc.nextInt();
        sc.close();
        floyd_triangle(n);
    }
}
