import java.util.*;

public class e_dataTypes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num;     // 5 integer limit is -2 billion to +2 billion
        char ch;     // 'a'
        String str;  // "saurav verma"
        float fnum;  // 5.5f float limit is up to 7 decimal digits
        boolean tf;  // true false
        double ffnum;// 43.76 double limit is up to 15 decimal digits
        long lnum;   // 123456789L long limit is -9 quintillion to +9 quintillion
        byte by;     // 127 byte limit is -128 to 127
        short sh;    // 1000 short limit is -32,768 to 32,767
        System.out.print("Enter Interger number : ");
        num = sc.nextInt();
        
        System.out.print("Enter char : ");
        ch = sc.next().charAt(0);
        sc.nextLine();

        System.out.print("Enter string : ");
        str = sc.nextLine();
        
        System.out.print("Enter floating number : ");
        fnum = sc.nextFloat();
        
        System.out.print("Enter boolean exp : ");
        tf = sc.nextBoolean();
        
        System.out.print("Enter double & Long numbers : ");
        ffnum = sc.nextDouble();
        lnum = sc.nextLong();
        
        System.out.print("Enter byte & short numbers : ");
        by = sc.nextByte();
        sh = sc.nextShort();
        
        System.out.println("------------ Output is ------------");
        System.out.println("Integer: " + num);
        System.out.println("Character: " + ch);
        System.out.println("String: " + str);
        System.out.println("Float: " + fnum);
        System.out.println("Boolean: " + tf);
        System.out.println("Double: " + ffnum + ", Long: " + lnum);
        System.out.println("Byte: " + by + ", Short: " + sh);
        sc.close();
    }
}
