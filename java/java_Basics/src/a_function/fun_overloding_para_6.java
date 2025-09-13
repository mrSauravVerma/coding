package a_function;
 class fun_overloading_para_6 {

    public static void fun(){
        System.out.println("in this fun there is no parameter");
    }

    public static void fun(int x, int y){
        System.out.println("with 2 para fun.  "+x+"+"+y+"="+(x+y));
    }

    public static int fun(int a, int b, int C){
        return a+b+C;
    }
    public static void main(String[] args){
        int a=10;
        int b=20;
        int c=30;
        fun();
        fun(a,b);
        System.out.println("with 3 para fun.  the sun of three a + b + c = "+fun(a,b,c));
    }
 }