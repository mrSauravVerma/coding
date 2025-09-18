package d_pattern;

public class b_half_pramid_11 {

    public static void star_half_pramid(int n) {
        System.out.print("inverted and rotated star printed helf-pramid");
        for (int i = n; i >= 0; i--) {
            for (int j = 0; j <= n; j++) {
                if (j < i) {
                    System.out.print(" ");
                } else if (j > i) {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }

    public static void number_half_pramid(int n) {
        System.out.print("inverted and rotated number printed helf-pramid\n");
        int N = n;
        for (int i = 1; i <= N; i++) {
          for (int j = 1; j <= N - 1; j++){
                System.out.print(" ");
            }
            for (int j = N - 1; j < n; j++) {
                System.out.print(i);
            }
            System.out.println();
            --N;
        }
    }

    public static void main(String[] args) {
        int n = 5;
        star_half_pramid(n);
        number_half_pramid(n);
    }
}
