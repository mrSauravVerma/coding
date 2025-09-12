import java.util.*;

public class try1 {

    public static void convert(int deciNum) {
        int pow = 0;
        int ans =0;
        while (deciNum > 0) {
            int lastDigit = deciNum % 10;
            ans += lastDigit * (int)Math.pow(lastDigit, pow);
            deciNum /= 10;
            pow++;
        }
        System.out.print(deciNum+"to binary is: "+ans);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter a decimal number: ");
        int deciNum = sc.nextInt();
        sc.close();
        convert(deciNum);
    }
}
