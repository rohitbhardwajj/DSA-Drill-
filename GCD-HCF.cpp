#include <iostream>
using namespace std;

int hcf(int a, int b) {
    if (b == 0) return a;
    return hcf(b, a % b);
}

int main() {
    int a = 12, b = 18;
    cout << hcf(a, b); 
    return 0;
}