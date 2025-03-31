#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int s, int e) {
    int pivot = arr[s];  
    int indx = s;  // Correct initialization
    
    // Count elements <= pivot
    for (int i = s + 1; i <= e; i++) {  // Correct loop range
        if (arr[i] <= pivot) {
            indx++;
            swap(arr[i], arr[indx]);
        }
    }
    swap(arr[s], arr[indx]);  // Place pivot at correct position
    return indx;
}

void quickSort(int arr[], int s, int e) {
    if (s >= e)
        return;

    // Partition
    int p = partition(arr, s, e);

    // Sort left part
    quickSort(arr, s, p - 1);

    // Sort right part
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[] = {2, 4, 1, 6, 9, 9, 9, 9};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    // Print sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
