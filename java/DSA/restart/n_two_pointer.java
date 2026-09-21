public class n_two_pointer {
    static int[] sol(int[] arr, int targate) {
        int tail = 0;
        int head = arr.length - 1;

        while (tail < head) {
            int sum = arr[tail] + arr[head];

            if (sum == targate) {
                return new int[] { tail, head };
            }
            if (sum > targate)
                head--;
            else
                tail++;
        }
        return new int[] { -1, -1 };
    }

    public static void main(String[] arga) {
        int[] arr = { 1, 4, 6, 7, 19 };
        int targate = 13;
        int[] result = sol(arr, targate);
        System.out.print("Indexes : " + result[0] + "," + result[1]);
    }
}
