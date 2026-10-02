public class Q_2965 {

    static void findMissingAndRepeatedValues(int[][] grid) {

        int rows = grid.length;
        int cols = grid[0].length;

        int total = rows * cols;

        int repeated = -1;
        int missing = -1;

        for (int num = 1; num <= total; num++) {

            int count = 0;

            // Search num in complete 2D array
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {

                    if (grid[i][j] == num) {
                        count++;
                    }
                }
            }

            if (count == 2) {
                repeated = num;
            }

            if (count == 0) {
                missing = num;
            }
        }

        System.out.println("Repeated number : " + repeated);
        System.out.println("Missing number : " + missing);
    }

    public static void main(String[] args) {

        int[][] arr = {
            {1, 2, 3},
            {3, 5, 6}
        };

        findMissingAndRepeatedValues(arr);
    }
}