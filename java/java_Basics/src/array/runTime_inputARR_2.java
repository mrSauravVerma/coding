package array;
// run time input of array program
import java.util.*;

public class runTime_inputARR_2 {

    public static void forInputFun(int s, int arr[]) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < s; i++) {
            System.out.print("enter the array" + "[" + i + "]" + " : ");
            arr[i] = sc.nextInt();
        }
        sc.close();
    }

    public static void printArray(int s, int arr[]) {
        for (int i = 0; i < s; i++) {
            System.out.println("arr[" + i + "]" + ": " + arr[i]);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the size of array : ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        forInputFun(size, arr);
        printArray(size, arr);
        sc.close();
    }
}
