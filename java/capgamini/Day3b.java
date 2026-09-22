package capgamini;

public class day3b {

    static int maxSubArray(int[] arr, int size) {

        int max = 0;
        for (int i = 0; i < size; i++) {

            for (int j = i; j < size; j++) {
                int currentSum = 0;

                for (int k = i; k <= j; k++) {
                    System.out.print(arr[k] + " ");
                    currentSum += arr[k];
                }
                System.out.print("   --> " + currentSum);
                System.out.println();
                max = Math.max(max, currentSum);
            }
            System.out.println();
        }
        return max;
    }

    static int maxValue(int[] arr, int s) {
        int max = Integer.MIN_VALUE;
        int current = 0;
        if (s == 1) {
            return arr[0];
        }

        for (int i = 0; i < s; i++) {
            current += arr[i];
            if (current < 0) {
                current = 0;
            }
            max = Math.max(current, max);
        }
        return max;
    }

    public static void main(String args[]) {
        int[] arr = { 2, 3, 5, 2, 3, 4 };
        int size = arr.length;
        System.out.println("maximum sub array : " + maxSubArray(arr, size));
        System.out.print("maximum of sub array : " + maxValue(arr, size));
    }
}
