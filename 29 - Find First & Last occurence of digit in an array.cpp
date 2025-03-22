#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> arry(n);
    cout << "Enter numbers in the array (sorted): ";
    
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }
    
    cout << "Enter a number you want to find in the array: ";
    cin >> target;
    
    int start = 0, end = n - 1;
    int first = -1, last = -1;

    // Find first occurrence
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arry[mid] > target) {
            end = mid - 1;
        } else if (arry[mid] < target) {
            start = mid + 1;
        } else { 
            first = mid; 
            end = mid - 1; 
        }
    }

    start = 0, end = n - 1;  


    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arry[mid] > target) {
            end = mid - 1;
        } else if (arry[mid] < target) {
            start = mid + 1;
        } else { 
            last = mid; 
            start = mid + 1; 
        }
    }

    if (first != -1) {
        cout << "First occurrence of " << target << " is at index: " << first << endl;
        cout << "Last occurrence of " << target << " is at index: " << last << endl;
    } else {
        cout << target << " is not present in the array." << endl;
    }

    return 0;
}
