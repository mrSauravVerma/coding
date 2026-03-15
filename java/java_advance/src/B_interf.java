import java.util.*;

interface first{
    int cal(int a, int b);
}
interface second{
    void res(int r);
}

class B_interf implements first , second {

    public int cal(int a , int b){
        return a+b;
    }

    public void res(int r){
        System.out.print("A + B : "+ r);
    }
    public static void main(String[] args){
        B_interf obj = new B_interf();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the two values : ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int r = obj.cal(a, b);
        obj.res(r);

        sc.close();
    }
}
