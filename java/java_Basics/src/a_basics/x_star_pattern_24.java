package a_basics;
import java.util.*;

public class x_star_pattern_24 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the number of line : ");
        int n = sc.nextInt();
        for (int i = n; i > 0; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}
