public class SumRowsColumns {
    public static void main(String[] args) {
        // Example 2D array
        int[][] arr = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        int rows = arr.length;
        int cols = arr[0].length;

        // Sum of each row
        for (int i = 0; i < rows; i++) {
            int rowSum = 0;
            for (int j = 0; j < cols; j++) {
                rowSum += arr[i][j];
            }
            System.out.println("Sum of row " + (i+1) + " = " + rowSum);
        }

        // Sum of each column
        for (int j = 0; j < cols; j++) {
            int colSum = 0;
            for (int i = 0; i < rows; i++) {
                colSum += arr[i][j];
            }
            System.out.println("Sum of column " + (j+1) + " = " + colSum);
        }
    }
}
