#include <iostream>
#include <string> 
using namespace std;

int main() {
    //ISBN is a 10 digit Number that are divisible by 11
    string number = "0471958697";
    int length = number.length();
    int ans = 0, i = 0;
    
    if (length != 10) {
        cout << "Not a ISBN number" << endl;
        return 0;
    }
    while (i < length) {
     
        int digit = number[i] - '0';
        ans += digit *(i+1);
        i++;
    }

  
    if (ans % 11 == 0) {
        cout << "Yes, it's a ISBN number" << endl;
    } else {
        cout << "Not a ISBN number" << endl;
    }

    return 0;
}