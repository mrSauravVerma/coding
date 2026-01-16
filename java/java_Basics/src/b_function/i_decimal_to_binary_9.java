package b_function;

import java.util.*;

public class i_decimal_to_binary_9 {

    public static void convert(int deci) {
        int ans = 0;
        int pow = 0;
        while (deci > 0) {
            ans = ans + (deci % 2) * (int) (Math.pow(10, pow));
            deci/=2;
            pow++;
        }
        System.out.print("binary equivalente :" + ans);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the any decimal number : ");
        int deciNum = sc.nextInt();
        sc.close();
        convert(deciNum);
    }
}
