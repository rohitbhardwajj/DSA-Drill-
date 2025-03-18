#include <iostream>
using namespace std;

int main()
{
    int n, f = 0, s = 1, ans = 0;
    cout << "Enter a number : ";
    cin >> n;
    
    if (n >= 1) {
        cout << f << " ";
    }
    if (n >= 2) {
        cout << s << " ";
    }
    
    for(int i = 3; i <= n; i++) {
        ans = f + s;
        cout << ans << " ";
        f = s;
        s = ans;
    }
    
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, f = 0, s = 1, ans = 0;
//     cout << "Enter a number : ";
//     cin >> n;
//     cout << f << " " << s << " ";
    
//     for(int i = 1; i <= n; i++) {
//         ans = f + s;
//         cout << ans << " ";
//         f = s;
//         s = ans;
//     }
// }