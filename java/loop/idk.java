import java.util.Scanner;

public class Idk {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Using for loop:");
        for (int i = 0; i <= 10; i++) {
            System.out.println(i);
        }

        System.out.println("Using while loop:");
        int l = 0; 
        while (l <= 10) {
            System.out.println(l);
            l++;
        }
        
        sc.close();
    }
}
