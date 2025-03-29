#include <iostream>
using namespace std;

int binarySearch(int* arr, int end, int target, int start = 0) {
    int mid = (start+end)/2;
    if(arr[mid]==target) return mid;
    if(start>end) return -1;
    
    if(arr[mid]>target){
       return binarySearch(arr , end=mid-1 , target , start);
    }else{
        return binarySearch(arr , end , target , start=mid+1);
    }
    
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

    int ans = binarySearch(arr, n, target);
    
    if (ans == -1) {
        cout << "Element not found.";
    } else {
        cout << "Element found at index: " << ans;
    }

    delete[] arr;  

    return 0;
}
