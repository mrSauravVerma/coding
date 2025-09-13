package b_function;

import java.util.*;

public class bionomial_cofficient_5 {

    public static int factorial(int num) {
        int fact = 1;
        for (int i = 1; i <= num; i++) {
            fact = fact * i;
        }
        return fact;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the value of n : ");
        int n = sc.nextInt();
        System.out.println("enter the value of r : ");
        int r = sc.nextInt();

        int nFact = factorial(n);
        int rFact = factorial(r);
        int n_rFact = factorial(n - r);
        int bionomialCoff = nFact / (rFact * (n_rFact));
        System.out.println("the bionomial cofficient of " + n + " C " + r + " : " + bionomialCoff);
        sc.close();
    }
}
