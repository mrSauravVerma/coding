package b_function;

// Write a program to print hollow square pattern of * using function.
import java.util.*;

public class a_hollow_square_10 {

    public static void printPattern(int raw, int col) {
        for (int i = 1; i <= raw; i++) {
            for (int j = 1; j <= col; j++) {
                if (i == 1 || i == raw || j == 1 || j == col) {
                    // i==1 -> first row, i==raw -> last row
                    // j==1 -> first column, j==col -> last column
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] agrs) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the number of rows: ");
        int raw = sc.nextInt();
        System.out.print("Enter the number of column: ");
        int col = sc.nextInt();
        sc.close();
        printPattern(raw, col);
    }
}
