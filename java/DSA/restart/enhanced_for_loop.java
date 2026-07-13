//  Demonstrates printing elements of an array using an enhanced for-loop.
public class enhanced_for_loop {

    public static void main(String args[]) {
        int[] arr = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };

        // Enhanced for-loop iterates over each element in the array.
        // 'i' represents the current element value on each iteration.
        for (int i : arr) {
            // Print the current element to the console.
            System.out.println(i);
        }

    }
}
