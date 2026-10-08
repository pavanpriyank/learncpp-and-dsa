#include <iostream>                 //ask
#include <algorithm>
using namespace std;
int main() {
    int n; // Controls the size. Total matrix size will be (2*n - 1) x (2*n - 1)
    cin>>n;
    int size = 2 * n - 1;

    // Loop through each row
    for (int i = 0; i < size; i++) {
        // Loop through each column
        for (int j = 0; j < size; j++) {
            // Find the minimum distance from the current cell to any of the 4 borders
            int top = i;
            int bottom = size - 1 - i;
            int left = j;
            int right = size - 1 - j;
            
            // The value at the current spot is determined by its nesting level
            int value = n - min({top, bottom, left, right});
            
            cout << value << " ";
        }
        // Move to the next row
        cout << endl;
    }

    return 0;
}