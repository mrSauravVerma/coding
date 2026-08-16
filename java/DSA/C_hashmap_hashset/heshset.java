package DSA.C_hashmap_hashset;

// import java.util.HashSet;
// import java.util.Scanner;
import java.util.*;

public class heshset {
    @SuppressWarnings("ConvertToTryWithResources")
    public static void main(String[] args) {
        HashSet<Integer> set = new HashSet<>();

        Scanner sc = new Scanner(System.in);
        System.out.print("enter the size of array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.print("Enter arr[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            System.out.print("arr[" + i + "] : " + arr[i] + "\n");
        }
        for (int i = 0; i < n; i++) {
            set.add(arr[i]);
        }

        System.out.println("arr[1] is part of set or not : " + set.contains(arr[1])); 
        set.remove(100); // for remove any number into set
        set.add(200); // // for add any number into set
        System.out.println(set);

        sc.close();
    }
}