vector<int> nextSmallerElement(vector<int> &arr, int n) {
    vector<int> ans;

    for(int i = 0; i < n; i++) {
        int next = -1;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[i]) {
                next = arr[j];
                break; // pehla chhota element mil gaya
            }
        }
        ans.push_back(next);
    }

    return ans;
}





// approahh-------------------2






#include <vector>
#include <stack>
#include <algorithm> // for reverse
using namespace std;

void find(stack<int>& s, vector<int>& ans, int val) {
    int nextSmaller = -1;
    while(!s.empty() && s.top() >= val) {
        s.pop();
    }
    if(!s.empty()) {
        nextSmaller = s.top();
    }
    ans.push_back(nextSmaller);
    s.push(val);
}

vector<int> nextSmallerElement(vector<int> &arr, int n) {
    stack<int> s;
    vector<int> ans;

    for(int i = n - 1; i >= 0; i--) {
        find(s, ans, arr[i]);
    }

    reverse(ans.begin(), ans.end());  // reverse to match original order
    return ans;
}

