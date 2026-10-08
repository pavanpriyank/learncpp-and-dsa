// public class SumOfSquaresTable {
//     public static void main(String[] args) {

//         System.out.println("Number\tSquare");

//         for (int i = 1; i <= 10; i++) {
//             int square = i * i;
//             System.out.println(i + "\t" + square );
//         }
//     }
// }

    public class SumOfSquaresTable{
        public static void main(String[] args) {
            int i = 1;
            do{
            int square = i*i;   
             System.out.println(i + "\t" + square );
              i++;
            }while(i<=10);
          
        }
    }