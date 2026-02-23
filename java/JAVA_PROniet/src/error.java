// DSA programs
// program 4

class Main {
    public static void main(String[] args) {
        int arr[] = {1,9,3,4,5};
        int check = 0;
        for(int i=0 ; i < arr.length ; i++){
            for( int j=i ; j<arr.length ; j++){
                if(i>0){
                    if(arr[i-1]>arr[i]){
                        check = 1;
                    }
                }
            }
                if(check == 0){
                    System.out.print("yes, array is sorted in assending");
                }
                else{
                    System.out.print("NO, array is not sorted in assending");
                }
                break;
        }
    }
}
