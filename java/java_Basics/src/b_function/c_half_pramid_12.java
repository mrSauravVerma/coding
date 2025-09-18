package b_function;

public class c_half_pramid_12 {
    public static void half_pattern(int n) {
        System.out.print("half number pattern");
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                System.out.print(j);
            }
            System.out.println();
        }
    }

    public static void inverted_pattern(int n) {
        System.out.print("half inverted number pattern");
        for (int i = n; i > 0; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 5;
        half_pattern(n);
        inverted_pattern(n);
    }
}
