package a_basics;
import java.util.*;
public class bill_pro_10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("enter the price of pen :");
        float pen = sc.nextFloat();
        System.out.println("enter the price of book:");
        float book = sc.nextFloat();
        System.out.println("enter the price of notebook:");
        float notebook = sc.nextFloat();

        float total = (pen+book+notebook);
        float gst = (total*18/100);
        System.out.println("total bill is:"+(total-gst));
        sc.close();
    }
}
