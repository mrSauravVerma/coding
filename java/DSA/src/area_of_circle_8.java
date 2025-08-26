import java.util.*;
public class area_of_circle_8 {
    public static void main(String[] args) {
        System.out.println("enter the radius of circle : ");
        Scanner sc=new Scanner(System.in);
        float radius = sc.nextFloat();
        float pai = 3.14f;
        System.out.println("area of circle is :"+(pai*radius*radius));
        sc.close();
    }
}