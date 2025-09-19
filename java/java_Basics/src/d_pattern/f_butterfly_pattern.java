package d_pattern;

public class f_butterfly_pattern {

    public static void topPart(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (j <= i) {
                    System.out.print(" *");
                } else {
                    System.out.print("  ");
                }
            }

            for (int j = n; j >= 1; j--) {
                if (j > i) {
                    System.out.print("  ");
                } else {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
    }

    public static void bottomPart(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = n; j >= 1; j--) {
                if (j >= i) {
                    System.out.print(" *");
                } else {
                    System.out.print("  ");
                }
            }

            for (int j = 1; j <= n; j++) {
                if (i > j) {
                    System.out.print("  ");
                } else {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        System.out.print("the BETTERFLY PATTER .\n");
        int n = 5;
        topPart(n);
        bottomPart(n);
    }
}
