#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0, temp;
    cout << "Enter a number : ";
    cin >> n;
    
    if (n == 0) { 
        cout << "Yes it's a Harshad Number";
        return 0;
    }

    temp = n;
    
    while (n > 0) {
        int lastDigit = n % 10;
        ans += lastDigit;
        n /= 10;
    }
    
    if (temp % ans == 0)
        cout << "Yes it's a Harshad Number";
    else
        cout << "No it's not a Harshad number";

    return 0;
}
