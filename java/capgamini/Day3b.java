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

    public static void main(String args[]) {
        int[] arr = { 2, 3, 5, 2, 3, 4 };
        int size = arr.length;
        System.out.print("maximum sub array : " + maxSubArray(arr, size));
    }
}
