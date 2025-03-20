#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    int max = INT_MIN, min = INT_MAX;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arry[n]; 
    
    cout << "Enter " << n << " elements in the array: ";
    
    for (int i = 0; i < n; i++) {
        cin >> arry[i];  
    }
    
    for (int i = 0; i < n; i++) {
        if (arry[i] > max) 
            max = arry[i]; 
        
        if (arry[i] < min) 
            min = arry[i];
    }
    
    cout << "Max = " << max << endl << "Min = " << min;

    return 0;
}
