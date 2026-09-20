public class freq {

    public static void frequency(){
        String str = "aabbccddddrffff";
        char[] ch = str.toCharArray();
        int [] arr = new int[127];
        for(int i= 0 ; i<ch.length ; i++){
            arr[ch[i]]++;
        }

        for(int i= 0 ; i< arr.length ; i++){
            if(arr[i] != 0){
                System.err.println(arr[i] + " " + i);
            }
        }
    }

    public static void main(String[] args) {
        frequency();
    }
}
