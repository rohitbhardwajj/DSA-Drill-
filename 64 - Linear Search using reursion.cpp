#include <iostream>
using namespace std;

int linearSearch(int* arr, int n, int target, int i = 0) {
    if (i == n) return -1; 
    if (arr[i] == target) return i;  
    return linearSearch(arr, n, target, i + 1); 
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

    int target;
    cout << "Enter target value: ";
    cin >> target;

    int ans = linearSearch(arr, n, target);
    
    if (ans == -1) {
        cout << "Element not found.";
    } else {
        cout << "Element found at index: " << ans;
    }

    delete[] arr;  

    return 0;
}
