package array;

import java.util.Scanner;

class MyClass {
    public int[] enterValues(int size) {
        Scanner obj = new Scanner(System.in);
        int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
            System.out.print("enter [" + i + "] : ");
            arr[i] = obj.nextInt();
        }
        obj.close();
        return arr;
    }

    public int[] sorting(int[] arr, int size) {
        int temp;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
    }

    public int[] show(int[] arr, int size) {
        for (int i = 0; i < size; i++) {
            System.out.println("arr [" + i + "] : " + arr[i]);
        }

        System.out.print("Second largest number in array : " + arr[1]);

        return arr;
    }

}

public class secondL {
    public static void main(String args[]) {
        Scanner obj = new Scanner(System.in);
        MyClass co = new MyClass();

        System.out.print("Enter the size of array : ");
        int size = obj.nextInt();

        int arr[] = co.enterValues(size);
        arr = co.sorting(arr, size);
        co.show(arr, size);
        obj.close();
    }
}
