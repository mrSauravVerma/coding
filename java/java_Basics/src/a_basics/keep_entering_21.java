package a_basics;
import java.util.*;

public class keep_entering_21 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("enter the new number : ");
            int num = sc.nextInt();
            int reminder = num % 10;
            if (reminder == 0) {
                System.out.print("your number is multiple of 10.");
                break;
            }
        }
        sc.close();
    }
}
