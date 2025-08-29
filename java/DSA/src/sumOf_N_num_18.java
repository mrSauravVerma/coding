import java.util.*;

public class sumOf_N_num_18 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter any N number :");
        int n = sc.nextInt();
        int i = 0, sum = 1;
        while (i < n) {
            sum += i;//sum = sum + i;
            ++i;
        }
        System.out.print("sum of natural N numbers :" + sum);
        sc.close();
    }
}
