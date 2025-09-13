package b_function;

// function overloading by changing the data type of parameter
public class fun_overloading_type_7 {
    public static void fun(int x) {
        System.out.println("(fun 1)with int para fun.  x = " + x);
    }

    public static void fun(char y) {
        System.out.println("(fun 1)with char para fun.  y = " + y);
    }

    public static void fun(float z) {
        System.out.println("(fun 3)with float para fun. z = " + z);
    }

    public static void main(String[] args) {
        int a = 10;
        char b = 'A';
        float c = 10.5f;
        fun(a);
        fun(b);
        fun(c);
    }
}
