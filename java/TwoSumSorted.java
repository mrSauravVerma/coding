public class TwoSumSorted {

    public static int[] twoSumSorted(int[] arr, int target) {
        // Initialize pointers
        int left = 0;
        int right = arr.length - 1;
        // Keep going until the pointers meet
        while (left < right) {
            int currentSum = arr[left] + arr[right];
            if (currentSum == target) {
                return new int[] { left, right }; // Match found
            } else if (currentSum < target) {
                left++; // Need a larger number
            } else {
                right--; // Need a smaller number
            }
        }
        // No pair found
        return null;
    }

    public static void main(String[] args) {

        // Define the sorted array and the target sum
        int[] myArray = { 2, 7, 11, 15 };
        int myTarget = 22;
        // Call the function
        int[] resultIndices = twoSumSorted(myArray, myTarget);
        // Print the final result
        if (resultIndices != null) {
            int index1 = resultIndices[0];
            int index2 = resultIndices[1];

            int val1 = myArray[index1];
            int val2 = myArray[index2];

            System.out.println("Success! Target " + myTarget + " found.");
            System.out.println("Indices: [" + index1 + ", " + index2 + "]");
            System.out.println("Values: " + val1 + " + " + val2 + " = " + myTarget);
        } else {
            System.out.println("No two numbers in the array add up to " + myTarget + ".");
        }
    }
}