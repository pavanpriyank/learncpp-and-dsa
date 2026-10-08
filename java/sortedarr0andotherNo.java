// public class sortedarr0andotherNo {
//     public static void main(String[] args) {
//         int[] arr = {1, 2, 0, 3, 0};
//         int n = arr.length;

//         // Pass 1: Print non-zero numbers
//         for (int i = 0; i < n; i++) {
//             if (arr[i] != 0) {
//                 System.out.print(arr[i] + " ");
//             }
//         }

//         // Pass 2: Print zero numbers
//         for (int i = 0; i < n; i++) {
//             if (arr[i] == 0) {
//                 System.out.print(arr[i] + " ");
//             }
//         }
//     }
// }

public class sortedarr0andotherNo {
    public static void main(String[] args) {
        int[] arr = {1, 2, 0, 3, 0};
        int n = arr.length;
        int[] brr = new int[n];
        int index = 0;

        // Copy all non-zero elements into brr
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                brr[index] = arr[i];
                index++;
            }
        }
        // In Java, remaining positions in brr default to 0 automatically

        // Print array brr
        for (int i = 0; i < n; i++) {
            System.out.print(brr[i] + " ");
        }
    }
}