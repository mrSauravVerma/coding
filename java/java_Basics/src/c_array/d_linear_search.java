package c_array;

import java.util.*;

public class d_linear_search {

    public static void linearSearch(int arr[], int num) {
        for (int i = 0; i < 10; i++) {
            if (arr[i] == num) {
                System.out.print("index of " + num + " is : " + (i + 1));

            }
        }
    }

    public static void main(String[] args) {
        int arr[] = { 2, 7, 4, 9, 5, 1, 3, 10, 6, 8 };
        System.out.print("Enter the number between 1 to 10 : ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        sc.close();
        System.out.print("find index of " + num + "\n");
        linearSearch(arr, num);
    }
}
