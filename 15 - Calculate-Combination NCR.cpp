#include <iostream>
using namespace std;

int fact(int a) {
    int ans = 1;
    for (int i = 1; i <= a; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int n, r;
    
    cout << "Enter values for n and r: ";
    cin >> n >> r;

    if (r > n) {
        cout << "r cannot be greater than n" << endl;
        return 0;
    }

    int N = fact(n);
    int C = fact(r);
    int R = fact(n - r);

    cout << "nCr = " << N / (C * R) << endl;

    return 0;
}
