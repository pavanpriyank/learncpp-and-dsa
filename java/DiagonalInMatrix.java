import java.util.Scanner;

public class DiagonalInMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Ask user for size (square matrix)
        System.out.print("Enter size of square matrix (n x n): ");
        int n = sc.nextInt();

        int[][] arr = new int[n][n];

        // Input elements
        System.out.println("Enter " + (n * n) + " elements:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        // Print the matrix
        System.out.println("Matrix:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        // Print main diagonal (top-left to bottom-right)
        System.out.print("Main diagonal: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i][i] + " ");
        }
        System.out.println();

        // Print secondary diagonal (top-right to bottom-left)
        System.out.print("Secondary diagonal: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i][n - 1 - i] + " ");
        }

        sc.close();
    }
}
