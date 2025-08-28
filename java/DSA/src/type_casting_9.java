class type_casting_9 {
    public static void main(String[] args) {
        int num = 10;
        float num2 = num; // implicit casting

        float num3 = 23.43f;
        // float num4=num3; error
        int num4 = (int) num3; // explicit casting
        // In explicit casting we loose data after decimal point.

        // In java we can not convert boolean to any other data type and not convert any
        // short size data type to long size data type directly.
        System.out.println("this is implicit casting : " + num2);
        System.out.println("this is explicit casting : " + num4);

        byte b = 10;
        char c = 'c';
        short sh = 150;
        int i = 100;
        float f = 20.20f;
        double d = 30.30;

        System.out.println("type of result:" + ((Object) ((f * b) + (i % 'C') - (d * sh))).getClass().getSimpleName());
        // System.out.println(" find type:" + ((Object) obj ).getClass().getSimpleName() );
    }
}