#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 0, 3, 0};
    int n = arr.size();

    // Pass 1: Print non-zero numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << " ";
        }
    }

    // Pass 2: Print zero numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}