#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < 2 * n; j++) {  
            if (j == i || j == 2 * n - 2 - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
