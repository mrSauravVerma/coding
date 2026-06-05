import java.util.Scanner;

public class c_array {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array : ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.print("Enter arr[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            System.out.println("arr[" + i + "] : " + arr[i]);
        }
        int gNum = arr[0];
        int sNum = arr[0];
        int sum = arr[0];
        for (int i = 1; i < n; i++) {
            if(arr[i]>gNum){
                gNum = arr[i];
            }
            if(arr[i]<sNum){
                sNum = arr[i];
            }
            sum = sum + arr[i];
        }

        float avg = sum/n;
        System.out.println("Greatest number in array is : " + gNum);
        System.out.println("Smallest number in array is : " + sNum);
        System.out.println("Sum of all array numbers : " + sum);
        System.out.print("Avarage of all number : " + avg);

        sc.close();
    }
}
