package a_basics;
public class assignment_op_14 {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        System.out.println("a = b : " + (a = b)); // a=20 ------
        System.out.println("a += b : " + (a += b)); // a=a+b=20+20=40
        System.out.println("a -= b : " + (a -= b)); // a=a-b=40-20=20
        System.out.println("a *= b : " + (a *= b)); // a=a*b=20*20=400
        System.out.println("a /= b : " + (a /= b)); // a=a/b=400/20=20
        System.out.println("a %= b : " + (a %= b)); // a=a%b=20%20=0
    }
}