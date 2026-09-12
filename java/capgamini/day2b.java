package capgamini;

public class day2b {
    static int maxSlide(int[] arr, int k) {
        int maximum = 0;
        int currntSum;

        for (int i = 0; i < k; i++)
            maximum += arr[i];

        for (int i = k; i < arr.length; i++) {
            currntSum = maximum + arr[i] - arr[i - k];
            if (currntSum > maximum)
                maximum = currntSum;
        }

        return maximum;
    }

    public static void main(String args[]) {
        int[] arr = { 1, 2, 3, 4, 5, 6 };
        int k = 3;
        System.out.print("max of sliding window : " + maxSlide(arr, k));
    }
}
