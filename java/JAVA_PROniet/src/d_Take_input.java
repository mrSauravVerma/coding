import java.util.*;

public class d_Take_input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = sc.next();
        // string name = sc.nextLine(); nextLine use for input more then one word
        System.out.print("name: " + name);
        sc.close();

    }
}
