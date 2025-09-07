package array;

public class Declaration_arr_1 {
    public static void main(String[] args) {
        // Declaration and initialization of an array
        int[] arr =new  int[3];
        arr[0] = 10;
        arr[1] = 20;    
        arr[2] = 30;
        // int[] arr = {10, 20, 30}; // Alternative way to declare and initialize an array

        // Accessing and printing array elements
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Element at index " + i + ": " + arr[i]);
        }
    }
}
