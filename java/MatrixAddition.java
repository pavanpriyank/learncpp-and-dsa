public class MatrixAddition {
    public static void main(String[] args) {

        int[][] A = {{1,2},{3,4}};
        int[][] B = {{5,6},{7,8}};

        int rows = A.length;
        int cols = A[0].length;

        if (rows == B.length && cols == B[0].length) {
            int[][] sum = new int[rows][cols];

            // Perform addition
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    sum[i][j] = A[i][j] + B[i][j];
                }
            }

            // Print result once
            System.out.println("Resultant Matrix:");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    System.out.print(sum[i][j] + " ");
                }
                System.out.println();
            }
        } else {
            System.out.println("Matrices cannot be added");
        }
    }
}
