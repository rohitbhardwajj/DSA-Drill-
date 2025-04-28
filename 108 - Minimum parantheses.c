class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> ans;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                ans.push(s[i]);
            } else {
                if(!ans.empty() && ans.top() == '(') {
                    ans.pop();
                } else {
                    ans.push(s[i]);
                }
            }
        }

        return ans.size(); 
    }
};


// approach ------------2

#include <bits/stdc++.h> 
int findMinimumCost(string str) {
    // Odd length string can never be valid
    if (str.length() % 2 == 1) return -1;

    stack<char> s;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '{') {
            s.push(str[i]);
        } else {
            if(!s.empty() && s.top() == '{') {
                s.pop();
            } else {
                s.push(str[i]);
            }
        }
    }

    // Now stack contains only unbalanced brackets
    int a = 0, b = 0;
    while(!s.empty()) {
        if(s.top() == '{') a++;
        else b++;
        s.pop();
    }

    // Minimum cost formula
    return (a + 1) / 2 + (b + 1) / 2;
}
