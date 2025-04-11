bool isValidParenthesis(string s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) return false;

            char top = st.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                st.pop();
            } else {
                return false;
            }
        }
    }

    return st.empty();
}



// leetcode



class Solution {
    public:
        bool isValid(string s) {
            stack<char> ans;
    
            for (char ch : s) {
                if (ch == '(' || ch == '{' || ch == '[') {
                    ans.push(ch);
                } else {
                    if (ans.empty()) return false;
    
                    if ((ch == ')' && ans.top() == '(') ||
                        (ch == '}' && ans.top() == '{') ||
                        (ch == ']' && ans.top() == '[')) {
                        ans.pop();
                    } else {
                        return false;
                    }
                }
            }
    
            return ans.empty(); 
        }
    };
    
