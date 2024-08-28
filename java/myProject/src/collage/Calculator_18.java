package collage;

import java.awt.*;
import java.awt.event.*;

public class Calculator_18 extends Frame implements ActionListener {
    TextField display;
    Button[] numberButtons = new Button[10];
    Button addButton, subButton, mulButton, divButton, eqButton, clrButton;
    String operator = "";
    double num1, num2, result;

    public Calculator_18() {
        // Display TextField
        display = new TextField();
        display.setBounds(50, 50, 220, 40);
        add(display);

        // Number Buttons
        int x = 50, y = 100;
        for (int i = 0; i < 10; i++) {
            numberButtons[i] = new Button(String.valueOf(i));
            numberButtons[i].setBounds(x, y, 50, 50);
            numberButtons[i].addActionListener(this);
            add(numberButtons[i]);
            x += 60;
            if (x > 170) {
                x = 50;
                y += 60;
            }
        }

        // Operator Buttons
        addButton = new Button("+");
        subButton = new Button("-");
        mulButton = new Button("*");
        divButton = new Button("/");

        addButton.setBounds(230, 100, 50, 50);
        subButton.setBounds(230, 160, 50, 50);
        mulButton.setBounds(230, 220, 50, 50);
        divButton.setBounds(230, 280, 50, 50);

        addButton.addActionListener(this);
        subButton.addActionListener(this);
        mulButton.addActionListener(this);
        divButton.addActionListener(this);

        add(addButton);
        add(subButton);
        add(mulButton);
        add(divButton);

        // Equals Button
        eqButton = new Button("=");
        eqButton.setBounds(50, 340, 110, 50);
        eqButton.addActionListener(this);
        add(eqButton);

        // Clear Button
        clrButton = new Button("C");
        clrButton.setBounds(170, 340, 110, 50);
        clrButton.addActionListener(this);
        add(clrButton);

        // Frame settings
        setSize(350, 450);
        setLayout(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        for (int i = 0; i < 10; i++) {
            if (e.getSource() == numberButtons[i]) {
                display.setText(display.getText() + i);
            }
        }
        if (e.getSource() == addButton) {
            operator = "+";
            num1 = Double.parseDouble(display.getText());
            display.setText("");
        } else if (e.getSource() == subButton) {
            operator = "-";
            num1 = Double.parseDouble(display.getText());
            display.setText("");
        } else if (e.getSource() == mulButton) {
            operator = "*";
            num1 = Double.parseDouble(display.getText());
            display.setText("");
        } else if (e.getSource() == divButton) {
            operator = "/";
            num1 = Double.parseDouble(display.getText());
            display.setText("");
        } else if (e.getSource() == eqButton) {
            num2 = Double.parseDouble(display.getText());
            switch (operator) {
                case "+":
                    result = num1 + num2;
                    break;
                case "-":
                    result = num1 - num2;
                    break;
                case "*":
                    result = num1 * num2;
                    break;
                case "/":
                    result = num1 / num2;
                    break;
            }
            display.setText(String.valueOf(result));
            operator = "";
        } else if (e.getSource() == clrButton) {
            display.setText("");
        }
    }

    public static void main(String[] args) {
        new Calculator_18();
    }
}
