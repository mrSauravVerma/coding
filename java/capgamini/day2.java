package capgamini;

// Sliding Window
public class day2 {

    static int max(int a, int b) {
        return a > b ? a : b;
    }

    static void maxSum(int[] arr, int n, int k) {

        // Sum of first k elements
        int sum = 0;

        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        int maxSum = sum;

        // Sliding window
        for (int i = k; i < n; i++) {
            sum = sum + arr[i] - arr[i - k];
            maxSum = max(maxSum, sum);
        }

        System.out.println("Maximum sum = " + maxSum);
    }

    public static void main(String[] args) {

        int a = 4, b = 5;

        int[] arr = { 6, -4, 2, 3, 1, -5 };

        int n = arr.length;
        int k = 3;

        System.out.println("Maximum of " + a + " and " + b + " = " + max(a, b));

        maxSum(arr, n, k);
    }
}