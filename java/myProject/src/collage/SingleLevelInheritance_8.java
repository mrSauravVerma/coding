package collage;

class Animal {
    void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Dog is barking");
    }
}

public class SingleLevelInheritance_8 {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.eat();  // Method from Animal class
        dog.bark(); // Method from Dog class
    }
}

