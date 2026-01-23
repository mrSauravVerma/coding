public class f_typeCasting {
    public static void main(String[] args) {
        int intNum = 15;
        float fNum = 52.12f;
        System.out.println("values before casting :-\n intNum = " + intNum + "\n fNum = " + fNum);

        float intTOfloat = intNum; // implicit casting
        int floatTOint = (int) fNum; // explicit casting

        System.out.print("values after casting :-\n (floating var) intTOfloat = " + intTOfloat
                + "\n (integer number) floatTOint = " + floatTOint);
    }
}
