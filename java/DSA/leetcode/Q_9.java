import java.util.*;

public class Q_9 {
    public static boolean pali(int n) {
        int final_num = 0;
        int copy = n;
        while (n > 0) {
            final_num = (n % 10) + final_num * 10;
            n = n / 10;
        }
        return copy == final_num;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any number : ");
        int num = sc.nextInt();
        if (pali(num)) {
            System.out.println("The number is a palindrome.");
        } else {
            System.out.println("The number is not a palindrome.");
        }
        sc.close();
    }
}
