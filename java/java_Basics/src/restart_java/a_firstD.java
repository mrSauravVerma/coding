package restart_java;

import java.util.Scanner;

public class a_firstD {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String name;
        int age;
        System.out.println("Enter your name : ");
        name = sc.nextLine();

        System.out.println("Enter your age : ");
        age = sc.nextInt();

        System.out.println("Your name and age is " + name + " : " + age + " enterd by you");
        sc.close();
    }
}
