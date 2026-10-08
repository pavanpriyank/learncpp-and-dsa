// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 0, 3, 0};
//     int n = arr.size();

//     // Pass 1: Print non-zero numbers
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != 0) {
//             cout << arr[i] << " ";
//         }
//     }

//     // Pass 2: Print zero numbers
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 0) {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 0, 3, 0};
    int n = arr.size();
    vector<int> brr(n, 0); // Initialize with all 0s
    int index = 0;

    // Copy all non-zero elements into brr
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            brr[index] = arr[i];
            index++;
        }
    }

    // Print array brr
    for (int i = 0; i < n; i++) {
        cout << brr[i] << " ";
    }

    return 0;
}