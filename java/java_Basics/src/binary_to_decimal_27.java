import java.util.*;

// Program to convert binary number to decimal number
public class binary_to_decimal_27 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a binary number: ");
        int binaryNumber = sc.nextInt();
        sc.close();
        int temp = binaryNumber;
        boolean isValid = false;
        while (temp > 0) {
            int lastDigit = temp % 10;
            if (lastDigit != 0 && lastDigit != 1) {
                System.out.println("Invalid binary number.");
                isValid = true;
                return;
            }
            temp /= 10;
        }
        if (!isValid == true) {
            int decimalNumber = 0;
            int power = 0;

            while (binaryNumber > 0) {
                int lastDigit = binaryNumber % 10;
                decimalNumber += lastDigit * Math.pow(2, power);
                binaryNumber /= 10;
                power++;
            }

            System.out.println("Decimal equivalent: " + decimalNumber);
        }
    }
}
