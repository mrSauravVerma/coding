package collage;

interface Drawable {
    void draw();
}

class Rectangle implements Drawable {
    public void draw() {
        System.out.println("Drawing a rectangle");
    }
}

class Circle implements Drawable {
    public void draw() {
        System.out.println("Drawing a circle");
    }
}

public class Interface_9 {
    public static void main(String[] args) {
        Drawable rect = new Rectangle();
        rect.draw(); // Calls Rectangle's draw method

        Drawable circle = new Circle();
        circle.draw(); // Calls Circle's draw method
    }
}

