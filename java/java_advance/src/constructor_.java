class constructor_ {
    String name;
    int age;

    // Constructor
    constructor_() {
        name = "Unknown";
        age = 0;
    }

    void display() {
        System.out.println(name + " " + age);
    }

    public static void main(String[] args) {
        constructor_ s1 = new constructor_();  // constructor called automatically
        s1.display();
    }
}
