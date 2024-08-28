package collage;

import java.awt.*;
import java.awt.event.*;

public class RegistrationForm_17 extends Frame implements ActionListener {
    TextField nameField, emailField;
    Choice genderChoice;
    Button submitButton;

    public RegistrationForm_17() {
        // Label for name
        Label nameLabel = new Label("Name:");
        nameLabel.setBounds(50, 50, 80, 30);
        add(nameLabel);

        // TextField for name
        nameField = new TextField();
        nameField.setBounds(140, 50, 150, 30);
        add(nameField);

        // Label for email
        Label emailLabel = new Label("Email:");
        emailLabel.setBounds(50, 100, 80, 30);
        add(emailLabel);

        // TextField for email
        emailField = new TextField();
        emailField.setBounds(140, 100, 150, 30);
        add(emailField);

        // Label for gender
        Label genderLabel = new Label("Gender:");
        genderLabel.setBounds(50, 150, 80, 30);
        add(genderLabel);

        // Choice for gender
        genderChoice = new Choice();
        genderChoice.setBounds(140, 150, 150, 30);
        genderChoice.add("Male");
        genderChoice.add("Female");
        genderChoice.add("Other");
        add(genderChoice);

        // Button for submission
        submitButton = new Button("Submit");
        submitButton.setBounds(50, 200, 80, 30);
        submitButton.addActionListener(this);
        add(submitButton);

        // Frame settings
        setSize(350, 300);
        setLayout(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        String name = nameField.getText();
        String email = emailField.getText();
        String gender = genderChoice.getSelectedItem();

        System.out.println("Name: " + name);
        System.out.println("Email: " + email);
        System.out.println("Gender: " + gender);
    }

    public static void main(String[] args) {
        new RegistrationForm_17();
    }
}
