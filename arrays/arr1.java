
import java.util.Scanner;
public class arr1 {
    public static void main(String[] args) {
Scanner sc=new Scanner(System.in);

        int arr[] = new int[6];
        System.out.println("Enter the elements of the array:");
        for(int i=0;i<=5;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("The elements of the array are:");
        for(int i=0;i<=5;i++){
            System.out.println(arr[i]);
        }
    }
    
}
