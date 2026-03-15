class first_{

    first_() {
        System.out.println("constructor method.");
    }

    void use() {
        System.out.print("only for class object use.");
    }
    public static void main(String[] args) {
        first_ ob = new first_();
        ob.use();
    }

}   