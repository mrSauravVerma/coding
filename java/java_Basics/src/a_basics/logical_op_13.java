package a_basics;
public class logical_op_13 {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        int c = 30;
        System.out.println("AND operator a && b : " + (a < b && b < c)); // true
        System.out.println("a && b : " + (a < b && b > c)); // false
        System.out.println("OR operator a || b : " + (a < b || b > c)); // true
        System.out.println("a || b : " + (a > b || b > c)); // false
        System.out.println("NOT operator !(a < b) : " + !(a < b)); // false
        System.out.println("!(a > b) : " + !(a > b)); // true
    }
}
