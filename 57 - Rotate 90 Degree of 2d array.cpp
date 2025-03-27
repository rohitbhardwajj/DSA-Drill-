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

    cout << "Spiral print of matrix: " << endl;
  class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(); 


        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
      
        
         for (int i = 0; i < n; i++) {
            int j = 0;  
            for (int k = n - 1; k >= j; k--) {  
                swap(matrix[i][j], matrix[i][k]);
                j++; 
            }
        }
    }
};
    

    return 0;
}
