package capgamini;

class sol {

    static void swap(int[] arr, int j, int i) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }

    static void print(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    static void solution(int[] arr, int k) {
        int j = 0;
        for (int i = arr.length - k; i < arr.length; i++) {
            swap(arr, j, i);
            j++;
        }
        print(arr);
    }
}

public class rotate_arrray {
    public static void main(String[] args) {

        sol obj = new sol();
        int[] arr = { 1, 2, 3, 4, 5, 6, 7, 8 };
        int k = 3;
        obj.print(arr);
        System.out.println();
        obj.solution(arr, k);
    }
}
/*
input - 1,2,3,4,5,6,7,8   , k = 3
output- 6,7,8,1,2,3,4,5
*/