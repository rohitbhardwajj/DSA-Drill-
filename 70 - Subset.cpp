#include <iostream>
#include <vector>
using namespace std;

void subset(vector<int> &s, vector<int> output, int n, int idx) {
    if (idx > n) {
        cout << "{ ";
        for (int num : output)
            cout << num << " ";
        cout << "}" << endl;
        return
    }


    subset(s, output, n, idx + 1);
    output.push_back(s[idx]);
    subset(s, output, n, idx + 1);
}

int main() {
    vector<int> s = {1, 2, 3};
    vector<int> output;
    subset(s, output, s.size() - 1, 0);

    return 0;
}
