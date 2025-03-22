#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target, start, end;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> arry(n);
    cout << "Enter numbers in the array: ";
    
    start = 0;
    end = n - 1;
    
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }
    
    cout << "Enter a number you want to find in the array: ";
    cin >> target;
    
    while (start <= end) {
        int mid = (start + end) / 2;
        
        if (arry[mid] > target) {
            end = mid - 1;
        } else if (arry[mid] < target) {
            start = mid + 1;
        } else { 
            cout << target << " is present at index number " << mid;
            return 0;
        }
    }
    
    cout << target << " is not present in the array.";
    return 0;
}
