class calValue {
    public void maxNum(int[] arr) {
        int maxV = Integer.MIN_VALUE; // mimimum value in integers values in java
        for (int i = 0; i < arr.length; i++) {
            if (maxV < arr[i]) {
                maxV = arr[i];
            }
        }
        System.out.println("Maximum vlaue in array : " + maxV);
    }

    public void minNum(int[] arr) {
        int minV = Integer.MAX_VALUE; // maximum value in integers values in java
        for (int i = 0; i < arr.length; i++) {
            if (minV > arr[i]) {
                minV = arr[i];
            }
        }
        System.out.println("Maximum vlaue in array : " + minV);
    }
}

public class i_minMaxArray {

    public static void main(String[] args) {

        int arr[] = { 1, 2, 6, 4, 2, 63, 23 };

        calValue obj = new calValue();
        obj.maxNum(arr);
        obj.minNum(arr);
    }
}
