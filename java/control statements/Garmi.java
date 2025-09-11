import java.util.Scanner;

public class Garmi {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        System.out.print("Enter your marks (0-100): ");
        int marks = scanner.nextInt();


        if (marks < 0 || marks > 100) {
            System.out.println("Invalid marks entered.");
            return; 
        }

         
        String remarkIfElse;
        if (marks >= 90) {
            remarkIfElse = "Excellent";
        } else if (marks >= 75) {
            remarkIfElse = "Good";
        } else if (marks >= 50) {
            remarkIfElse = "Average";
        } else {
            remarkIfElse = "Fail";
        }

        System.out.println("Remark using if-else: " + remarkIfElse);

        
        String remarkSwitch;
        switch (marks / 10) {
            case 10:
            case 9:
                remarkSwitch = "Excellent";
                break;
            case 8:
            case 7:
                remarkSwitch = "Good";
                break;
            case 6:
            case 5:
                remarkSwitch = "Average";
                break;
            default:
                remarkSwitch = "Fail";
                break;
        }

        System.out.println("Remark using switch: " + remarkSwitch);
    }
}