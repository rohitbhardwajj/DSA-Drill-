#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arry[n];
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }

    for (int i = 0; i < n ; i++) { 
        int index = i; 
        for (int j = i + 1; j < n; j++) {
            if (arry[j] < arry[index]) { 
                index = j; 
            }
        }
     
        if (index != i) {
            int temp = arry[i];
            arry[i] = arry[index];
            arry[index] = temp;
        }
    }

  
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arry[i] << " ";
    }

    return 0;
}
