
interface inter_a {
    public void fun_1();
}

interface inter_b {
    public void fun_2();
}

class practice implements inter_a, inter_b {

     public void fun_1() {
        System.out.println("this is new class");
    }
      public void fun_2() {
        System.out.println("this is new2 class");
    }
    public static void main(String[] args) {
        practice obj = new practice();
        obj.fun_1();
        obj.fun_2();
    }
}
