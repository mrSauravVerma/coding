import java.util.*;

public class Q_1524 {

    static int solution(int[] arr) {
        int count = 0;
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            
            for (int j = i; j < arr.length; j++) {

                for (int k = i; k <= j; k++) {
                    // System.out.print(arr[k]);
                    sum += arr[k];

                }
                if (sum % 2 != 0) {
                    count++;
                }
                sum = 0;
            }
        }
        return count;
    }

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.print("Enter arr[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        System.out.print("Odd sums are : " + solution(arr));
    }
}
