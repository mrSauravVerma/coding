import java.util.*;

// Program to convert binary number to decimal number
public class binary_to_decimal_27 {

    public static boolean checkNumber(int temp) {
        while (temp > 0) {
            int lastDigit = temp % 10;
            if (lastDigit != 0 && lastDigit != 1) {
                System.out.println("Invalid binary number.");
                return true; // true means invalid
            }
            temp /= 10;
        }
        return false; // false means valid
    }

    public static void convert(int binaryNumber, boolean isInvalid) {
        if (!isInvalid) {
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

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a binary number: ");
        int binaryNumber = sc.nextInt();
        sc.close();

        boolean isInvalid = checkNumber(binaryNumber);
        convert(binaryNumber, isInvalid);
    }
}
