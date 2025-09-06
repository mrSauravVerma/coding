import java.util.*;

// Program to print all prime numbers in a given range
public class range_primeCheck_26 {

    public static boolean checkPrime(int n) {
        if (n < 2)
            return false;
        if (n == 2)
            return true;

        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void prime_nums(int start, int end) {
        System.out.println("Prime numbers between " + start + " and " + end + ": ");
        for (int i = start; i <= end; i++) {
            if (checkPrime(i)) {
                System.out.print(i + " ");
            }
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the range (start and end): ");
        int start = sc.nextInt();
        int end = sc.nextInt();
        prime_nums(start, end);
        sc.close();
    }
}
