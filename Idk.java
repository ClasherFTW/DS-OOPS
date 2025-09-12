import java.util.Scanner;
public class Idk {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
         int n;
         System.out.println("Enter a number: ");
            
            n = sc.nextInt();
            System.out.println("Multiplication table of " + n + " is: ");
          for(int i = 1; i<= 10; i++) {
              System.out.println(n + " x " + i + " = " + n * i);
        
          }
       
      
    }
}
