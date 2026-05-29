import java.util.Scanner;

public class a_digit_count {
    public static void main(String args[]) {
        Scanner obj = new Scanner(System.in);
        System.out.print("Enter any number : ");
        int num = obj.nextInt();
        int count = 1;
        while (num >= 10) {
            num = num / 10;
            count++;
        }

        System.out.println("Number of digits : "+count);
        obj.close();
    }
}
