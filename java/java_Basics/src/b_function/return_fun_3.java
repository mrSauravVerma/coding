package b_function;

import java.util.*;

public class return_fun_3 {

    public static int calculate_square(int n){
        int cal = n*n;
        return cal;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the any number :");
        int n = sc.nextInt();
        int square;
        square = calculate_square(n);
        System.out.print("square of "+n+" :"+square);
        sc.close();
    }
}
