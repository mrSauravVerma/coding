package training;
public class pattern {
    static void sol(int n) {
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            System.out.print("\n");
        }
    }

    static void sol2(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            System.out.print("\n");
        }
    }

    static void sol3(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                if (i % 2 == 0) {
                    System.out.print(j);
                } else {
                    System.out.print("*");
                }
            }
            System.out.print("\n");
        }
    }

    static void sol4(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                if (j % 2 == 0) {
                    System.out.print("*");
                } else {
                    System.out.print(j);
                }
            }
            System.out.print("\n");
        }
    }

    static void sol5(int n) {
        int num = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(num);
                num++;
            }
            System.out.print("\n");
        }
    }

    public static void main(String args[]) {
        int n = 6;
        System.out.println("pattern first");
        sol(n);
        System.out.println("pattern second");
        sol2(n);
        System.out.println("pattern third");
        sol3(n);
        System.out.println("pattern fourth");
        sol4(n);
        System.out.println("pattern fifth");
        sol5(n);

    }
}
