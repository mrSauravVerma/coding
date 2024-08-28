package collage;
import java.awt.*;
import java.awt.event.*;

public class AWTControls_16
 extends Frame implements ActionListener {
    TextField textField;
    Button button;
    Checkbox checkbox1, checkbox2;
    List list;

    public AWTControls_16
    () {
        // Label
        Label label = new Label("Enter your name:");
        label.setBounds(50, 50, 100, 30);
        add(label);

        // TextField
        textField = new TextField();
        textField.setBounds(160, 50, 150, 30);
        add(textField);

        // Button
        button = new Button("Click Me");
        button.setBounds(50, 100, 100, 30);
        button.addActionListener(this);
        add(button);

        // Checkbox
        checkbox1 = new Checkbox("Java");
        checkbox1.setBounds(50, 150, 100, 30);
        add(checkbox1);

        checkbox2 = new Checkbox("Python");
        checkbox2.setBounds(160, 150, 100, 30);
        add(checkbox2);

        // List
        list = new List();
        list.setBounds(50, 200, 150, 60);
        list.add("Option 1");
        list.add("Option 2");
        list.add("Option 3");
        add(list);

        // Frame settings
        setSize(400, 300);
        setLayout(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        String name = textField.getText();
        boolean isJavaChecked = checkbox1.getState();
        boolean isPythonChecked = checkbox2.getState();
        String selectedOption = list.getSelectedItem();

        System.out.println("Name: " + name);
        System.out.println("Java: " + isJavaChecked);
        System.out.println("Python: " + isPythonChecked);
        System.out.println("Selected option: " + selectedOption);
    }

    public static void main(String[] args) {
        new AWTControls_16
        ();
    }
}
