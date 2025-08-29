import java.util.*;
public class average_of_3num_16 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter 3 numbers : ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if((a==b)||(b==c)||(c==a)){
            System.out.println("please inter the non-eqale numbers");
        }
        else if((a>b)&&(a>c)){
            System.out.println("a greater than c & b.");
        }
        else if((b>a)&&(b>c)){
            System.out.println("b is greater than a & c.");
        }
        else{
        System.out.println("c is greater than a & b.");
        }
    sc.close();
    }
}
