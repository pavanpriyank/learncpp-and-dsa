import java.util.Scanner;

public class TableOfAnyNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input number from user
        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int k = 1;  // loop variable

        System.out.println("Table of " + num);

        // do-while loop
        do {
            System.out.println(num + " x " + k + " = " + (num * k));
            k++;
        } while (k <= 10);

        sc.close(); // close scanner
    }
}