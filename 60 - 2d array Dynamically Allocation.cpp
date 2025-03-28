#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Dynamically allocate 2D array
    int** arr = new int*[n];
    for(int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    // Taking input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing output
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // Move to next line after each row
    }

    // Deallocate memory
    for(int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
