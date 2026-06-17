import java.util.HashSet;
import java.util.Scanner;

public class Q_17 {

    public static boolean checkArr(int[] arr) {
        HashSet<Integer> obj = new HashSet<>();

        for (int i = 0; i < arr.length; i++) {
            obj.add(arr[i]);
        }
        if (obj.size() < arr.length) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[5];
        System.out.println("Enter array values : ");
        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }

        boolean check = checkArr(arr);
        System.out.print("Repeated value in array : " + check);

        sc.close();
    }
}
