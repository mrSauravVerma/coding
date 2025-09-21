// Program to take input in 2D array and display it
import java.util.*;

public class b_twoD_array {

    public static void enterValues(int arr[][]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the values of the array: ");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print("Enter arr[" + i + "][" + j + "]" + ": ");
                arr[i][j] = sc.nextInt();
            }
        }
        sc.close();
    }

    public static void display(int arr[][]) {
        System.out.println("The array is: ");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: \n");
        int rows = sc.nextInt();
        System.out.print("Enter the number of columns: \n");
        int cols = sc.nextInt();
        int arr[][] = new int[rows][cols];
        enterValues(arr);
        display(arr);
        sc.close();
    }
}
