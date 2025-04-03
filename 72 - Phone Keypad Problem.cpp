#include <iostream>
#include <vector>
using namespace std;

void phoneKey(string arr[], string s, string result, int idx) {
    // Base Case: If we reach the end of the string, print the result
    if (idx >= s.size()) {
        cout << result << endl;
        return;
    }
    

    int a = s[idx] - '0';  
    

    for (char c : arr[a]) {
        phoneKey(arr, s, result+c , idx + 1);
    }
}

int main() {
    string arr[10] = {"0", "0", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string s = "23"; 
    string result = "";
   
    phoneKey(arr, s, result, 0);
    return 0;
}
