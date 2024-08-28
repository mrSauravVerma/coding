package collage;

public class StringMethodsExample_7 {
    public static void main(String[] args) {
        String str1 = "HelloWorld";
        String str2 = "     hello";

        // charAt() - Get the character at a specific index
        System.out.println("Character at index 4: " + str1.charAt(4));

        // compareTo() - Compare two strings lexicographically
        System.out.println("Comparison result: " + str1.compareTo(str2));

        // equals() - Check if two strings are equal
        System.out.println("str1 equals str2: " + str1.equals(str2));

        // length() - Get the length of the string
        System.out.println("Length of str1: " + str1.length());

        // toUpperCase() - Convert the string to uppercase
        System.out.println("str1 in uppercase: " + str1.toUpperCase());

        // toLowerCase() - Convert the string to lowercase
        System.out.println("str1 in lowercase: " + str1.toLowerCase());

        // replace() - Replace characters in the string
        System.out.println("str1 after replacing 'o' with 'a': " + str1.replace('o', 'a'));
    }
}

