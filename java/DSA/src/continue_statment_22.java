import java.util.*;

public class continue_statment_22 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the any number between 1 to 100 : ");
        int num = sc.nextInt();
        int i = 1;
        System.out.println("print 1 to n multiple of three.");
        do {
            if (i % 3 != 0) {
                i++;
                continue;
            }
            System.out.println(i);
            i++;
        } while (i <= num);
        sc.close();
    }
}
