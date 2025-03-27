class Solution {
public:
    int compress(vector<char>& chars) {
        vector<string> ans;
        int count = 1;
        
        for (int i = 0; i < chars.size(); i++) {
            if (i < chars.size() - 1 && chars[i] == chars[i + 1]) {
                count++;
            } else {
                ans.push_back(string(1, chars[i]));
                if (count > 1) {
                    ans.push_back(to_string(count));
                }
                count = 1; 
            }
        }
        
        // अब ans को chars में copy करें
        chars.clear();
        for (string s : ans) {
            for (char c : s) {
                chars.push_back(c);
            }
        }

        return chars.size(); // नई compressed length return करें
    }
};