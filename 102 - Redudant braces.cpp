#include <bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        } 
        else if (ch == ')') {
            bool isRedundant = true;

            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    isRedundant = false; // operator mil gaya
                }
                st.pop();
            }

            if (!st.empty()) st.pop(); // remove opening '('

            if (isRedundant) return true; // redundant bracket found
        }
    }

    return false; // no redundant brackets
}
// done