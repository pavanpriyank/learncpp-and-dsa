#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5, x;

    cout << "Enter number: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << "Found";
            return 0;
        }
    }

    cout << "Not Found";

    return 0;
}