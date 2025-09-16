import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        while (true) {   
            System.out.print("Enter a number (0 to exit): ");
            n = sc.nextInt();

            if (n == 0) {   
                System.out.println("Exiting program...");
                break;
            }

            System.out.println("Multiplication table of " + n + " is: ");
            for (int i = 1; i <= 10; i++) {
                System.out.println(n + " x " + i + " = " + (n * i));
            }
            System.out.println();  
        }

        sc.close();
    }
}
