package capgamini;

public class jump {
    static boolean canJump(int[] nums) {
        int maxReach = 0;
        for (int i = 0; i < nums.length; i++) {
            if (i > maxReach) {
                return false;
            }
            maxReach = Math.max(maxReach, i + nums[i]);
        }
        return true;
    }

    /*
     * first itration : i = 0 , maxReach = 0;
     * secont itration : i =1 , maxReach = 2;
     * third itration : i =2 , maxReach = 4;0
     */

    public static void main(String[] args) {
        int[] arr = { 2, 3, 1, 1, 4 };

        boolean sol = canJump(arr);
        System.out.print("Can jupe : " + sol);
    }
}
