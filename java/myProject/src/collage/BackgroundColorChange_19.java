package collage;
import java.awt.*;
import java.awt.event.*;

public class BackgroundColorChange_19 extends Frame implements ActionListener {
    Button changeColorButton;

    public BackgroundColorChange_19() {
        // Button to change color
        changeColorButton = new Button("Change Background Color");
        changeColorButton.setBounds(50, 50, 200, 50);
        changeColorButton.addActionListener(this);
        add(changeColorButton);

        // Frame settings
        setSize(300, 200);
        setLayout(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == changeColorButton) {
            setBackground(Color.BLUE);
        }
    }

    public static void main(String[] args) {
        new BackgroundColorChange_19();
    }
}
