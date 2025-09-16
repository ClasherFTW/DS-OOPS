import java.util.Scanner;

public class arr3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];

        
        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }


        System.out.print("Enter index to update (0 to " + (n - 1) + "): ");
        int idx = sc.nextInt();

        
        if (idx >= 0 && idx < n) {
            System.out.print("Enter new value: ");
            int newVal = sc.nextInt();
            arr[idx] = newVal;  
            System.out.println("Element updated.");
        } else {
            System.out.println("Invalid index!");
        }

        
        System.out.print("Updated Array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        sc.close();
    }
}
