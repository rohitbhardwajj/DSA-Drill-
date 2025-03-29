#include <iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e) {
    int n1 = mid - s + 1;
    int n2 = e - mid;

    int *temp1 = new int[n1];
    int *temp2 = new int[n2];

    for (int i = 0; i < n1; i++) 
        temp1[i] = arr[s + i];
    for (int j = 0; j < n2; j++) 
        temp2[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = s;
    while (i < n1 && j < n2) {
        if (temp1[i] <= temp2[j]) 
            arr[k++] = temp1[i++];
        else 
            arr[k++] = temp2[j++];
    }

    while (i < n1) 
        arr[k++] = temp1[i++];
    while (j < n2) 
        arr[k++] = temp2[j++];

    delete[] temp1;
    delete[] temp2;
}

void mergeSort(int arr[], int s, int e) {
    if (s >= e) return;
    
    int mid = (s + e) / 2;
    
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    
    merge(arr, s, mid, e);
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

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}
