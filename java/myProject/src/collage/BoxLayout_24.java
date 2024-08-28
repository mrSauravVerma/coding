package collage;
import java.awt.*;
import javax.swing.*;
public class BoxLayout_24 extends Frame {
    public BoxLayout_24() {
        // Create a panel with BoxLayout manager
        Panel panel = new Panel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        // Add buttons to the panel
        for (int i = 1; i <= 5; i++) {
            panel.add(new Button("Button " + i));
        }
        // Add panel to frame
        add(panel);
        // Frame settings
        setSize(300, 200);
        setVisible(true);
    }
    public static void main(String[] args) {
        new BoxLayout_24();
    }
}

