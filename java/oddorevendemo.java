import java.util.Scanner;

public class oddorevendemo {
    public static void main(String[] args) {
        // Program: Count even and odd digits in a number

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int n = num;
        int evenCount = 0, oddCount = 0;

        while (n != 0) {
            int digit = n % 10;   // extract last digit    
            if (digit % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
            n = n / 10;           // remove last digit
        }

        System.out.println("Number: " + num);
        System.out.println("Even digits: " + evenCount);
        System.out.println("Odd digits: " + oddCount);

        sc.close();
    }
}

// 1234
// 1234 % 10 = 123 + 4  i=0        even++
// 1234 / 10 = 123 
// 123 %10 = 12 + 3   i = 1       odd++
// 123 / 10 = 12 
// 12 % 10 = 1 + 2  i=2              even++
//12 / 10 = 1 
// 1 % 10 = .1 = int num 1 i=3      odd++
//1 / 10 = .1 = 0 
