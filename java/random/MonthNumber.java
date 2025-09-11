import java.util.Scanner;

public class MonthNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a month number (1-12): ");
        int month = sc.nextInt();

        String monthname;
        int day = 0;

        switch (month) {
            case 1:
                monthname = "January";
                day = 31;
                break;
            case 2:
                monthname = "February";
                day = 28;
                break;
            case 3:
                monthname = "March";
                day = 31;
                break;
            case 4:
                monthname = "April";
                day = 30;
                break;
            case 5:
                monthname = "May";
                day = 31;
                break;
            case 6:
                monthname = "June";
                day = 30;
                break;
            case 7:
                monthname = "July";
                day = 31;
                break;
            case 8:
                monthname = "August";
                day = 31;
                break;
            case 9:
                monthname = "September";
                day = 30;
                break;
            case 10:
                monthname = "October";
                day = 31;
                break;
            case 11:
                monthname = "November";
                day = 30;
                break;
            case 12:
                monthname = "December";
                day = 31;
                break;
            default:
                monthname = "Invalid input! Please enter a number between 1 and 12.";
                System.out.println(monthname);
                sc.close();
                return;
        }

        System.out.println(monthname + " has " + day + " days");
        sc.close();
    }
}