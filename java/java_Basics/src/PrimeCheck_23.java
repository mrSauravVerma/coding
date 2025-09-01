import java.util.*;

public class PrimeCheck_23 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the any number :");
        int n = sc.nextInt();
        boolean isPrime = true;

        if (n <= 1) {
            isPrime = true;
        } else {
            for (int i = 2; i <= Math.sqrt(n); i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime==true) {
            System.out.println("'YES' this is a prime number.");
        } else {
            System.out.println("'NO' this is not a prime number.");
        }

        sc.close();
    }
}
