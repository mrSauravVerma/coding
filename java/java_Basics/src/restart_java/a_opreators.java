package restart_java;

import java.util.Scanner;

public class a_opreators {
    public static void main(String args[]) {
        Scanner obj = new Scanner(System.in);
        int num1, num2;
        System.out.println("Enter the first number ");
        num1 = obj.nextInt();
        System.out.println("Enter the scond number : ");
        num2 = obj.nextInt();
// OPREATORS
        System.out.println("AND OP " + ((num1 > num2) && (num2 > 10)));
        System.out.println("OR OP " + ((num1 > num2) || (num2 > 10)));
        System.out.println("NOT OP " + (!(num1 > num2)));
// IF ELSE
        if(num1 > num2){
            System.out.println("num1 is greater then num2");
        }
        else{
            System.out.println("num2 is greater then num1");
        }
// loops
        for(int i = 0 ; i<5 ; i++){
            System.out.println( i + " itration");
        }
        obj.close();
    }
}
