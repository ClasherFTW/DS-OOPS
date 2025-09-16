import java.util.Scanner;

public class arr2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // use consistent variable name

        System.out.print("Enter the size of the array: ");
        int a = sc.nextInt();  // take array size

        int arr[] = new int[a];

        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < a; i++) {
            arr[i] = sc.nextInt();
        }

        // Print array to verify
        System.out.println("You entered:");
        for (int i = 0; i < a; i++) {
            System.out.print(arr[i] + " ");
        }

        sc.close(); // close Scanner
    }
}
