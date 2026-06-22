public class twoD_array {
    public static void main(String[] args){

        // int [][] arr = {{1,2,3},
        
        int arr[][] = {{1,2,3},
                        {4,5,6},
                        {3,6,3}};
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++)
            {
                System.out.println(arr[i][j]);
            }
        }
    }
}
