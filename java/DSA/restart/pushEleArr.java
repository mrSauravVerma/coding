class pushEleArr {
    public static void main(String[] args) {
        int[] arr = new int[6];
        arr[0] = 3;
        arr[1] = 5;
        arr[2] = 6;
        arr[3] = 7;
        
        int pos = 3; // arr[2]
        int value = 50;
        int arr_size = 4;
        
        for(int i = arr_size ; i >= pos-1 ; i--){
            arr[i] = arr[i-1];
        }
        arr[pos-1] = value;
        arr_size++;
      
        for(int i = 0 ; i < arr_size ; i++){
            System.out.println("arr[" + i + "] : " + arr[i]);
        }  
    }
}
