import java.util.*;
public class mdarr4 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int[][] arr = new int[3][3];
        System.out.println("Enter the elements of the 3x3 array:");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        System.out.println("The elements of the array are:");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println("sumo f rows is ");
        for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<3;j++){
                sum+=arr[i][j];
            }
            System.out.println("Sum of row "+(i+1)+" is: "+sum);
        }
        System.out.println("sum of columns is ");
        for(int j=0;j<3;j++){
            int sum=0;
            for(int i=0;i<3;i++){
                sum+=arr[i][j];
            }
            System.out.println("Sum of column "+(j+1)+" is: "+sum);
        }

    }
}
