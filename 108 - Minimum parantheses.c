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
