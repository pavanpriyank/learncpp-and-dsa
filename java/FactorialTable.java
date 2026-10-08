public class FactorialTable {
    public static void main(String[] args) {
        long factorial = 1;

        System.out.println("Number\tFactorial");

        for (int i = 1; i <= 10; i++) {
            factorial *= i;  // multiply to get factorial
            System.out.println(i + "\t" + factorial);
        }
    }
}
// //using do while loop
//   int k = 1;          // loop variable
//         long factorial = 1; // factorial result

//         System.out.println("Number\tFactorial");

//         // do-while loop
//         do {
//             factorial *= k;   // multiply to get factorial
//             System.out.println(k + "\t" + factorial);
//             k++;
//         } while (k <= 10);
//     }
// }