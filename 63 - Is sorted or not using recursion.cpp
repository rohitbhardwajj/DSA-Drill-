#include <iostream>
using namespace std;

bool isSorted(int* arr, int n, int i = 0) {
    if (i == n - 1) return true;  
    if (arr[i] > arr[i + 1]) return false; 
    return isSorted(arr, n, i + 1);  
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr, n)) {
        cout << "Yes, it is sorted.";
    } else {
        cout << "Not a sorted array.";
    }

    delete[] arr;  

    return 0;
}
