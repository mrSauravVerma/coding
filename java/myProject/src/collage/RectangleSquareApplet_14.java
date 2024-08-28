package collage;

import java.applet.Applet;
import java.awt.Graphics;

public class RectangleSquareApplet_14 extends Applet {
    public void paint(Graphics g) {
        g.drawRect(50, 50, 200, 100); // Draw rectangle
        g.drawRect(100, 75, 50, 50);  // Draw square inside the rectangle
    }
}
