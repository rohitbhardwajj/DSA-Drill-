#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s = "rohit";
    stack<char> ans;

    for (int i = 0; i < s.length(); i++) {
        ans.push(s[i]);
    }

    cout << "Stack contents (top to bottom): ";
    while (!ans.empty()) {
        cout << ans.top();  
        ans.pop();          
    }

    return 0;
}
