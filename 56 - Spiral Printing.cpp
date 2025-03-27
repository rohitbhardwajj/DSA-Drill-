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
   int top=0, right=m-1, bottom = n-1 ,left =0;
   
   for(int i=left ; i<=right ; i++){
       cout<<arr[top][i];
   }
   top++;
   for(int i=top ; i<=bottom ; i++){
       cout<<arr[i][right];
   }
   right--;
    for(int i=right ; i>=left ; i--){
       cout<<arr[bottom][i];
   }
   bottom--;
     for(int i=bottom ; i>=top ; i--){
       cout<<arr[i][left];
   }
   left++;
   for(int i=left ; i<=right ; i++){
       cout<<arr[top][i];
   }
    

    return 0;
}
