package training;
public class pattern {
    static void sol(int n){
        for(int i=6 ; i>=1 ; i--){
            for(int j=1 ; j<=i ; j++){
                System.out.print(j);
            }
            System.out.print("\n");
        }
    }
    public static void main(String args[]){
        int n = 6;
        sol(n);
    }
}
