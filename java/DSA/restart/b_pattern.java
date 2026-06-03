import java.util.*;

public class b_pattern {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter num between (2 - 10) : ");
        int n = sc.nextInt();
        System.out.println("pattern one");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (i >= j) {
                    System.out.print("*");
                }
            }
            System.out.print("\n");
        }

        System.out.println("pattern two");
        for (int i = 0; i < n; i++) {
            for (int j = n; j > i; j--) {
                if (j > i) {
                    System.out.print("*");
                }
            }
            System.out.print("\n");
        }
        sc.close();
    }
}
