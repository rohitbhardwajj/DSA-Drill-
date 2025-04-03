#include <iostream>
#include <vector>
using namespace std;

void permutation(string s, int idx, vector<string>& output) {
    if (idx >= s.length()) {
        output.push_back(s);  // Store the permutation
        return;
    }
    

    for (int i = idx; i < s.length(); i++) {
        swap(s[idx], s[i]);  // Swap characters
        permutation(s, idx + 1, output);  // Recursive call
        swap(s[idx], s[i]);  // Backtrack
    }
}

int main() {
    string s = "abc";
    vector<string> output;
    permutation(s, 0, output);

    // Print all permutations
    for (string str : output) {
        cout << str << endl;
    }

    return 0;
}
