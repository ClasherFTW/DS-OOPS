import java.util.Scanner;

public class if_statements {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

      

        System.out.print("Enter number");
        int no = scanner.nextInt();       // Read an integer

     if (no%2 == 0) {
            System.out.println("Even number");
        } else {
            System.out.println("Odd number");
        }

        
        scanner.close();
    }
}