class A_classes_obj {

    public void show_value(int n) {
        System.out.print("value is : " + n);
    }

    public static void main(String args[]) {
        A_classes_obj obj = new A_classes_obj();
        int num = 10;
        obj.show_value(num);
    }
}

// with the of static keyword we do function call directly
// without creating object of the class but without static keyword we have to
// create object of the class to call the function
// class A_classes_obj {

// public static void show_value(int n){
// System.out.print("value is : " + n);
// }

// public static void main(String args[]){
// int num = 10;
// show_value(num);
// }
// }