package capgamini;

class sol {

    static void print(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    static void solution(int[] arr, int k) {
        int j = 0;
        int[] arr2 = new int[arr.length];
        for (int i = arr.length - k; i < arr.length; i++) {
            arr2[j] = arr[i];
            j++;
        }
        int j2 = 0;
        for (int i = arr.length - 2 - k; i < arr.length; i++) {
            arr2[i] = arr[j2];
            j2++;
        }
        System.out.println("Output");
        print(arr2);
    }
}

public class rotate_arrray {
    public static void main(String[] args) {

        sol obj = new sol();
        int[] arr = { 1, 2, 3, 4, 5, 6, 7, 8 };
        int k = 3;
        System.out.println("Input");
        obj.print(arr);
        System.out.println();
        obj.solution(arr, k);
    }
}
/*
 * input - 1,2,3,4,5,6,7,8 , k = 3
 * output- 6,7,8,1,2,3,4,5
 */