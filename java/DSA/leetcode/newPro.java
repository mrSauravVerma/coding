public class newPro {

    static int maxSubarraySum(int[] arr) {
        int max = Integer.MIN_VALUE;
        int current = 0;
        if (arr.length == 1) {
            return arr[0];
        }
        for (int i = 0; i < arr.length; i++) {
            current += arr[i];

            if (current < 0) { // Kadane's Algorithm
                current = 0;
            }
            max = Math.max(current, max);
        }
        return max;
    }

    public static void main(String[] args) {
        int[] arr = { 1, 5, -2, 4, 6, 3, -5 };
        int result = maxSubarraySum(arr);
        System.err.println("Max sub array : " + result);
    }
}
