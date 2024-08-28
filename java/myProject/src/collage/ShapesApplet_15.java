package collage;

import java.applet.Applet;
import java.awt.Graphics;

public class ShapesApplet_15 extends Applet {
    public void paint(Graphics g) {
        g.drawLine(20, 20, 100, 100);           // Draw line
        g.drawRect(120, 20, 80, 50);            // Draw rectangle
        g.fillOval(220, 20, 50, 50);            // Draw filled oval
        g.fillRect(300, 20, 80, 50);            // Draw filled rectangle
    }
}
