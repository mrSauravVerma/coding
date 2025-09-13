package c_array;

public class Declaration_arr_1 {
    public static void main(String[] args) {
        // Declaration and initialization of an array
        int[] arr =new  int[3];
        arr[0] = 10;
        arr[1] = 20;    
        arr[2] = 30;
        /*int[] arr = {10, 20, 30};
        Alternative way(shortcut) to declare and initialize an array

        int arr2[] = new int[]{10,20};
        Another way to declare and initialize an array */
                                                        
        // Accessing and printing array elements
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Element at index " + i + ": " + arr[i]);
        }
    }
}
