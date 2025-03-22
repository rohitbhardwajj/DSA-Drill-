#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> arry(n);
    
    cout << "Enter 0, 1, and 2 only: ";
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }

    int s = 0, mid = 0, e = n - 1;

    while (mid <= e) {
        if (arry[mid] == 0) {
            swap(arry[s], arry[mid]);
            s++;
            mid++;
        } else if (arry[mid] == 1) {
            mid++;
        } else { // arry[mid] == 2
            swap(arry[mid], arry[e]);
            e--;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arry[i] << " ";
    }

    return 0;
}
