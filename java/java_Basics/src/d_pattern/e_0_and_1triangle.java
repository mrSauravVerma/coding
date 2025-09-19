package d_pattern;

import java.util.*;

public class e_0_and_1triangle {
    public static void printTriangle(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                if ((j + i) % 2 == 0) { // j%2==0 also work with minnor changes in for loop
                    System.out.print("1 ");
                } else {
                    System.out.print("0 ");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the line of triangle: ");
        int n = sc.nextInt();
        sc.close();
        printTriangle(n);
    }
}
