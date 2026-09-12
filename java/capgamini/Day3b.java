package capgamini;

public class Day3b {

    static void rotate(int[] arr, int k) {

        int n = arr.length;
        k = k % n; // handles k > n

        for (int r = 1; r <= k; r++) {

            int last = arr[n - 1];

            for (int i = n - 1; i > 0; i--) {
                arr[i] = arr[i - 1];
            }

            arr[0] = last;
        }
    }

    static void printArray(int[] arr) {
        for (int x : arr) {
            System.out.print(x + " ");
        }
    }

    public static void main(String[] args) {

        int[] arr = { 1, 2, 3, 4, 5 };
        int k = 2;

        rotate(arr, k);
        printArray(arr);
    }
}
