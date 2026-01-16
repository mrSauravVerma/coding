package a_basics;
import java.util.*;

public class o_if_else_15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter your income : ");
        int income = sc.nextInt();
        if (income <= 5000) {
            System.out.println("no tax");
        } else if (income > 5000 && income <= 10000) {
            System.out.println("your income after tax : " + (income - (income * 0.1)));
            System.out.println("your tax is : " + (income * 0.1));
        } else if (income > 10000 && income <= 20000) {
            System.out.println("your income after tax : " + (income - (income * 0.2)));
            System.out.println("your tax is : " + (income * 0.2));
        } else {
            System.out.println("your income after tax : " + (income - (income * 0.3)));
            System.out.println("your tax is : " + (income * 0.3));
        }
        sc.close();
    }
}
