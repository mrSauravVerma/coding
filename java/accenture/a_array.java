package accenture;

import java.util.Scanner;

public class a_array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[3];
        System.out.print("Enter values of array : ");
        for (int i = 0; i <= 2; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i <= 2; i++) {
            System.out.print("arr [" + i + "] : " + arr[i] + "\n");
        }
        sc.close();
    }
}