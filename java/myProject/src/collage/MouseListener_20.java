package collage;

import java.awt.*;
import java.awt.event.*;

public class MouseListener_20 extends Frame implements MouseListener {
    Label label;

    public MouseListener_20() {
        // Label to display events
        label = new Label();
        label.setBounds(50, 50, 200, 20);
        add(label);

        // Add mouse listener
        addMouseListener(this);

        // Frame settings
        setSize(300, 200);
        setLayout(null);
        setVisible(true);
    }

    public void mouseClicked(MouseEvent e) {
        label.setText("Mouse Clicked");
    }

    public void mousePressed(MouseEvent e) {
        label.setText("Mouse Pressed");
    }

    public void mouseReleased(MouseEvent e) {
        label.setText("Mouse Released");
    }

    public void mouseEntered(MouseEvent e) {
        label.setText("Mouse Entered");
    }

    public void mouseExited(MouseEvent e) {
        label.setText("Mouse Exited");
    }

    public static void main(String[] args) {
        new MouseListener_20();
    }
}
