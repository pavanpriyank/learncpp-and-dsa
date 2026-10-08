public class evenandoddin2Darr {
    public static void main(String[] args) {
            int[][] arr = {
            {12, 5, 8},
            {3, 19, 7},
            {10, 2, 15}
        };

        int evenCount = 0;
        int oddCount = 0;

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                if (arr[i][j] % 2 == 0) {
                    evenCount++;
                } else {
                    oddCount++;
                }
            }
        }
        System.out.println("Even count: " + evenCount);
        System.out.println("Odd count: " + oddCount);
    }
}