package capgamini;

import java.util.Scanner;

public class day5 {
    static boolean palindrome(int[] arr) {
        int start = 0;
        int end = arr.length - 1;
        for (int i = 0; i < arr.length; i++) {
            while (start < end) {
                if (arr[start] != arr[end]) {
                    return false;
                }
                start++;
                end--;
            }
        }
        return true;
    }

    public static void main(String args[]) {

        try (Scanner obj = new Scanner(System.in)) {
            System.out.print("Enter any number : ");
            int n = obj.nextInt();

            String num = String.valueOf(n);
            int[] arr = new int[num.length()];

            for (int i = 0; i < num.length(); i++) {
                arr[i] = num.charAt(i) - '0';
            }

            for (int i = 0; i < num.length(); i++) {
                System.out.println("Index " + i + ":" + arr[i]);
            }

            System.err.println("this number in plindrome : " + palindrome(arr));
        }
    }
}
