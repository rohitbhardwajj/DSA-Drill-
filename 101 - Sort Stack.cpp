#include <bits/stdc++.h>
using namespace std;

void sort(stack<int> &s, int ans) {
    if (s.empty() || s.top() <= ans) {
        s.push(ans);
        return;
    }

    int store = s.top();
    s.pop();
    sort(s, ans);
    s.push(store);
}

void rev(stack<int> &s) {
    if (s.empty()) {
        return;
    }
    int ans = s.top();
    s.pop();
    rev(s);
    sort(s, ans);
}

void sortStack(stack<int> &stack) {
    rev(stack);
}
