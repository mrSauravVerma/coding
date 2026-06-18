
//methode overloading program

class matheds {
    public void fun() {
        System.out.println("void method with no parameter\n////////");
    }

    public String fun(float n) {
        System.out.println("float parameter");
        return "float parameter\n/////////";
    }

    public String fun(int n) {
        System.out.println("int parameter");
        return "int parameter";
    }
}

class methodOverloading {
    public static void main(String[] args) {
        matheds obj = new matheds();
        obj.fun();
        int a = 4;
        float b = 5.45f;
        System.out.println("int return function : " + obj.fun(b));
        System.out.println("int return function with perameter : " + obj.fun(a));
    }
}
