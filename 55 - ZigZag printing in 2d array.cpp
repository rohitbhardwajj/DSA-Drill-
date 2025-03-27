#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter how many rows: ";
    cin >> n;

    cout << "Enter how many columns: ";
    cin >> m;

    int arr[n][m];

    cout << "Enter elements in " << n << " rows and " << m << " columns:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Wave print of matrix: " << endl;
    for (int i = 0; i < m; i++) {  
        if (i % 2 == 0) {  
            for (int j = 0; j < n; j++) {
                cout << arr[j][i] << " ";
            }
        } else {  
            for (int j = n - 1; j >= 0; j--) {
                cout << arr[j][i] << " ";
            }
        }
    }

    return 0;
}
