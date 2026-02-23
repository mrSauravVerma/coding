// DSA programs
// program 4

class D_file_pro {
    public static void main(String[] args) {
        int arr[] = { 0, 0, 1, 4, 3 };
        int check = 0;
        for (int i = 1; i < arr.length; i++) {
            if (arr[i - 1] <= arr[i]) {
                check++;
            }
        }
        if (check == arr.length - 1) {
            System.out.print("yes, array is sorted in assending order");
        } else {
            System.out.print("NO, array is not sorted in assendingv order");
        }
    }
}
