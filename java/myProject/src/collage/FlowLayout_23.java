package collage;

import java.awt.*;

public class FlowLayout_23 extends Frame {
    public FlowLayout_23() {
        // Set FlowLayout manager
        setLayout(new FlowLayout());

        // Add buttons to the frame
        for (int i = 1; i <= 5; i++) {
            add(new Button("Button " + i));
        }

        // Frame settings
        setSize(300, 200);
        setVisible(true);
    }

    public static void main(String[] args) {
        new FlowLayout_23();
    }
}
