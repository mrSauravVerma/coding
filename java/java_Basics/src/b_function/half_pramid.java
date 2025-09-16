package b_function;

public class half_pramid {
    public static void main(String[] args) {
        System.out.print("inverted and rotated helf-pramid");
        for(int i=5 ; i>=0 ; i--){
            for(int j=0 ; j<=5 ; j++){
                if(j<i){
                    System.out.print(" ");
                }
                else if(j>i){
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
}
