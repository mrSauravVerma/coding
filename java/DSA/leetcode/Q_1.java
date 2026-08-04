// // Brute - force
// class Solution {
//     public int[] twoSum(int[] nums, int target) {
//         for (int i = 0; i < nums.length; i++) {
//             for (int j = i + 1; j < nums.length; j++) {
//                 if (nums[i] + nums[j] == target) {
//                     return new int[] { i, j };
//                 }
//             }
//         }
//         return new int[] {};
//     }
// }

// public class Q_1 {
//     public static void main(String args[]) {
//         Solution obj = new Solution();

//         int[] arr = { 1, 2, 3, 4, 5 };
//         int target = 9;
//         int[] result =obj.twoSum(arr, target);
//         System.out.print("sum of 9 on indexs is : " + result[0] + " and " + result[1]);
//     }
// }
 