import java.util.Arrays;

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

    // majority Element
    static int solution2(int[] arr) {
        Arrays.sort(arr);

        int count = 1;
        int num = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (num == arr[i]) {
                count++;
            } else {
                num = arr[i];
                count = 1;
            }

            if (count > arr.length / 2) {
                return num;
            }
        }
        return -1;
    }

    public static void main(String args[]) {
        int[] arr = { 5, 5, 5, 5, 1, 1, 2};
        System.out.println("(Brute froce) Majority Element : " + solution(arr));
        System.out.print("(Otimize) Majority Element : " + solution2(arr));
    }
}
