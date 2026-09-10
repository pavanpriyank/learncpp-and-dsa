#include <iostream>                    //ask
using namespace std;

// Function to partition the array around a pivot element
int partition(int arr[], int first, int last) {
    // Choosing the last element as the pivot
    int pivot = arr[last];
    // Index of the smaller element
    int i = first - 1;

    // Traverse through all elements and compare each with the pivot
    for (int j = first; j < last; j++) {
        // If the current element is less than or equal to the pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    // Place the pivot element in its correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[last];
    arr[last] = temp;

    // Return the partitioning index
    return i + 1;
}

// Function to implement QuickSort recursively
void quicksort(int arr[], int first, int last) {
    // Base case: if the array has 1 or 0 elements, it is already sorted
    if (first >= last) {
        return;
    }

    // Partition the array and get the pivot index
    int pi = partition(arr, first, last);

    // Recursively sort elements before and after the partition index
    quicksort(arr, first, pi - 1);  // Left subarray
    quicksort(arr, pi + 1, last);   // Right subarray
}

int main() {
    // Unsorted array initialization
    int arr[] = {20, 16, 28, 5, 36, 30};
    
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call quicksort to sort the entire array
    quicksort(arr, 0, n - 1);

    // Output the sorted array elements
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;
    
    return 0;
}