public class Q_169 {

    static int solution(int[] nums) {
        int c = nums.length / 2;
        int count;
        for (int i = 0; i < nums.length; i++) {
            count = 0;
            for (int j = i; j < nums.length; j++) {
                if (nums[j] == nums[i])
                    count++;
                if (count > c)
                    return nums[i];
            }
        }
        return -1;
    }

    public static void main(String args[]) {
        int[] arr = { 1, 1, 2, 2, 2, 1, 1 };
        System.out.print("Majority Element : " + solution(arr));
    }
}
