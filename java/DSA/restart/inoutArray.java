package array;

import java.util.Scanner;

public class inputArray {
    public static void main(String args[]) {

        Scanner obj = new Scanner(System.in);

        System.out.print("Enter the size of array : ");
        int size = obj.nextInt();

        int[] arr = new int[size];

        for (int i = 0; i < size; i++) {
            System.out.print("Enter arr[" + i + "] : ");
            arr[i] = obj.nextInt();
        }

        for (int i = 0; i < size; i++) {
            System.out.println("arr[" + i + "] : " + arr[i]);
        }
        obj.close();
    }
}
