#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }
    // 

    cout << ans;
    return 0;
}
