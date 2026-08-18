import java.util.Arrays;

public class Q_88 {

    public static int[] solution(int[] num1, int[] num2) {
        int j = 0;
        for (int i = num1.length - num2.length; i < num1.length; i++) {
            num1[i] = num2[j];
            j++;
        }

        Arrays.sort(num1);
        return num1;
    }

    public static void main(String args[]) {
        int[] num1 = { 4, 5, 6, 0, 0, 0 };
        int[] num2 = { 1, 2, 3 };
        int[] sol = solution(num1, num2);
        for (int i : sol) {
            System.out.print(i + " ");
        }
    }
}
