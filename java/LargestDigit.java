import java.util.Scanner;

public class LargestDigit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int n = num;
        int largest = 0;

        while (n != 0) {
            int digit = n % 10;   // extract last digit
            if (digit > largest) {
                largest = digit;  // update largest if current digit is bigger
            }
            n = n / 10;           // remove last digit
        }

        System.out.println("Number: " + num);
        System.out.println("Largest digit: " + largest);

        sc.close();
    }
}
