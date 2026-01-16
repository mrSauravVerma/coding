package a_basics;
import java.util.Scanner;

public class t_reverce_number_20 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the four digit number : ");
        int num = sc.nextInt();
        int revNum = 0;
        while (num != 0) {
            int lastDigit = num % 10;
            revNum = (revNum * 10) + lastDigit;
            num /= 10;
        }
        System.out.print("reverce number : " + revNum);
        sc.close();
    }
}
