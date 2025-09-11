


import java.util.Scanner;

public class PositiveNegativeNumber {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer: ");

        if (sc.hasNextInt()) {
            int num = sc.nextInt();

            if (num > 0) {
                System.out.println("The number is positive.");
            } else if (num < 0) {
                System.out.println("The number is negative.");
            } else {
                System.out.println("The number is zero.");
            }
        } else {
            System.out.println("Invalid input. Please enter a valid integer.");
        }

        sc.close();
    }
}