#include <iostream>
using namespace std;

void sayDigit(string digit[], int n) {
    if (n == 0) return;

    int lastDigit = n % 10;
    n /= 10;
    
    sayDigit(digit, n);  // Recursive call
    
    cout << digit[lastDigit] << " ";  // Print the word representation
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string digits[10] = {"zero", "one", "two", "three", "four",
                         "five", "six", "seven", "eight", "nine"};

    if (n == 0) {
        cout << "zero";  // Special case for 0
    } else {
        sayDigit(digits, n);
    }

    return 0;
}
