#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int target) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1; 
}

int main()
{
    int n, target;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements in rotated and sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element you want to find: ";
    cin >> target;

 
    int s = 0, e = n - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        
        if (arr[mid] < arr[e]) {
            e = mid;
        } else {
            s = mid + 1;
        }
    }

    int pivot = s;


    if (target >= arr[pivot] && target <= arr[n - 1]) {
        s = pivot;
        e = n - 1;
    } else {
        s = 0;
        e = pivot - 1;
    }


    int result = binarySearch(arr, s, e, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
