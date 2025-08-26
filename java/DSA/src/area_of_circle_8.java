import java.util.*;
public class area_of_circle_8 {
    public static void main(String[] args) {
        System.out.println("enter the radius of circle : ");
        Scanner sc=new Scanner(System.in);
        int radius = sc.nextInt();
        double pai = 3.14;
        System.out.println("area of circle is :"+(pai*radius*radius));
        sc.close();
    }
}