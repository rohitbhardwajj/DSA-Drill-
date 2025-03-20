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
