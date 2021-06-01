public class Main {

    public static void main(String args[]) {

                int num1 = 2;

                int num2 = 0;

                for (; num2 < 10; ++num2) {

                            if (num2 % num1 == 0)

                                        continue;

                            else if (num2 == 8)

                                        break;

                            else

                                        System.out.print(num2 + " ");

                }

    }

}