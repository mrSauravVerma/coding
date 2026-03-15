class C_constructor_ {
    String name;
    int age;

    // Constructor
    C_constructor_() {
        name = "Unknown";
        age = 0;
    }

    void display() {
        System.out.println(name + " " + age);
    }

    public static void main(String[] args) {
        C_constructor_ s1 = new C_constructor_();  // constructor called automatically
        s1.display();
    }
}
