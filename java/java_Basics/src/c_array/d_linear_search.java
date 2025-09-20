package c_array;

public class d_linear_search {

    public static void linearSearch(int arr[], int num) {
        for (int i = 0; i < 10; i++) {
            if (arr[i] == num) {
                System.out.print("index of " + num + ": " + i);
                
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int num = 6;
        System.out.print("find index of 6 \n");
        linearSearch(arr, num);
    }
}
