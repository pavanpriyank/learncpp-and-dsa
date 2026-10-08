import java.util.Scanner;

public class sumofevenorodd {
   public static void main(String[] args) {
        // Program: Count even and odd sum digits 

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int n = num;
        int evenCount = 0, oddCount = 0;
        int sumeven = 0,   sumodd = 0;
        while (n != 0) {
            int digit = n % 10;   // extract last digit    
            if (digit % 2 == 0) {
                sumeven = sumeven + digit;
                evenCount++;
            } else {
                sumodd = sumodd + digit;
                oddCount++;
            }
            n = n / 10;           // remove last digit
        }

        System.out.println("Number: " + num);
        System.out.println("Even digits: " + evenCount);
        System.out.println("sum of Even digits: " + sumeven);
        System.out.println("Odd digits: " + oddCount);
        System.out.println("sum of Odd digits: " + sumodd);

        sc.close();
    }  
}
