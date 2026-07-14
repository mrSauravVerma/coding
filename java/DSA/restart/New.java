import java.util.*;

public class New {
    public static void main(String[] args) {
        int[] arr = new int[4];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 4; i++) {
            System.out.print("Enter a[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < 4; i++) {
            System.out.println("a[" + i + "] : " + arr[i]);
        }
        sc.close();
    }
}
