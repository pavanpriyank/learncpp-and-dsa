public class PerfectSquaresDoWhile {
    public static void main(String[] args) {
        int i = 1;  // starting number
        int count =0;
        // do-while loop
        do {
            int square = i * i;
            if (square <= 1000) {
            
            }
            System.out.println(square);
            count++;
            i++;

        } while (i * i <= 1000);
        System.out.println("Total perfect squares between 1 and 1000: " + count);
    }
}
