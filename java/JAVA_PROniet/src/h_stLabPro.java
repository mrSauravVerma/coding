class h_stLabPro {
    public static void main(String[] args) {

        String str = "ihgfedcba";
        int loopR = (str.length() / 2) + 1;

        for (int i = 0; i < loopR; i++) {
            if (i > 0) {
                str = str.substring(1, str.length() - 1);
            }
            System.out.println(str);

            for (int j = 0; j <= i; j++) {
                System.out.print(" ");
            }
        }
    }
}