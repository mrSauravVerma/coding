package collage;
import java.awt.*;

public class BorderLayout_22 extends Frame {

    public BorderLayout_22() {
        // Set BorderLayout manager
        setLayout(new BorderLayout());

        // Add buttons to different regions of the BorderLayout
        add(new Button("North"), BorderLayout.NORTH);
        add(new Button("South"), BorderLayout.SOUTH);
        add(new Button("East"), BorderLayout.EAST);
        add(new Button("West"), BorderLayout.WEST);
        add(new Button("Center"), BorderLayout.CENTER);

        // Frame settings
        setSize(400, 300);
        setTitle("BorderLayout Example");
        setVisible(true);
    }

    public static void main(String[] args) {
        new BorderLayout_22();
    }
}
