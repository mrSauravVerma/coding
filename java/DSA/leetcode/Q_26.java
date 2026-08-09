
class Q_26 {

    public static int removeDuplicates(int[] nums) {
        int i = 0;
        for (int j = 1; j < nums.length; j++) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
/*dry run
    first iteration: i=0, j=1, nums[i]=1, nums[j]=4 => nums[1] != nums[0] => i=1, nums[1]=4
    second iteration: i=1, j=2, nums[i]=4, nums[j]=4 => nums[2] == nums[1] => i=1, nums[1]=4
    third iteration: i=1, j=3, nums[i]=4, nums[j]=5 => nums[3] != nums[1] => i=2, nums[2]=5
    fourth iteration: i=2, j=4, nums[i]=5, nums[j]=6 => nums[4] != nums[2] => i=3, nums[3]=6
    fifth iteration: i=3, j=5, nums[i]=6, nums[j]=6 => nums[5] == nums[3] => i=3, nums[3]=6
    sixth iteration: i=3, j=6, nums[i]=6, nums[j]=7 => nums[6] != nums[3] => i=4, nums[4]=7
    seventh iteration: i=4, j=7, nums[i]=7, nums[j]=8 => nums[7] != nums[4] => i=5, nums[5]=8   
    return i+1 => 5+1 => 6
*/

    public static void main(String[] args) {
        int[] arr = { 1, 4, 4, 5, 6, 6, 7, 8 };
        System.out.println(removeDuplicates(arr));
    }
}