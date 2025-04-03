#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Jagged array ka base pointer
    int** arr = new int*[rows];

    // Har row ke liye alag column size input le rahe hain
    for (int i = 0; i < rows; i++) {
        int cols;
        cout << "Enter number of columns for row " << i + 1 << ": ";
        cin >> cols;
        
        // Har row ke liye dynamic column allocation
        arr[i] = new int[cols];

        // Values input lena
        cout << "Enter " << cols << " elements for row " << i + 1 << ": ";
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Output jagged array
    cout << "\nJagged Array Output:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; arr[i][j] != '\0'; j++) { // '\0' nahi hoga, loop size se chalana hoga
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Memory free karna (Important!)
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
