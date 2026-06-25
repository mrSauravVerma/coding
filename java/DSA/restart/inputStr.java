package string;

import java.util.Scanner;

public class inputStr {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the string : ");
        str = sc.nextLine();
        // str = sc.next(); for single word enter

        System.out.print("Entered string is : " + str);

        sc.close();
    }
}
