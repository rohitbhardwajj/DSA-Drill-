#include <iostream>
using namespace std;

int main() {
    
    int n, rem;
    string ans = "";  

    cout << "Enter a Decimal number: ";
    cin >> n;

    while (n != 0) {
        rem = n % 2;
        ans = to_string(rem) + ans ;  
        n /= 2;
    }

    cout << "Binary: " << ans << endl;

    return 0;
}
// Approach-2

// #include <iostream>
// #include <bitset>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a Decimal number: ";
//     cin >> n;

//     cout << "Binary: " << bitset<8>(n) << endl;
//     return 0;
// }

// Approach-3

// #include <iostream>
// using namespace std;

// void decimalToBinary(int n) {
//     if (n == 0) return; 
    
//     decimalToBinary(n >> 1);  
//     cout << (n & 1);  
// }

// int main() {
//     int n = 12;
//     if (n == 0) cout << "0";  
//     else decimalToBinary(n);
    
//     return 0;
// }

