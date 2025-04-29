class Solution {
public:
    bool isAnagram(string s, string t) {
        // Declare a map to count the frequency of characters
        map<char, int> ans;

        // Count characters in s
        for(int i = 0; i < s.length(); i++) {
            ans[s[i]]++;
        }

        // Decrease the count for characters in t
        for(int i = 0; i < t.length(); i++) {
            ans[t[i]]--;
        }

        // Check if all the counts are zero
        for(auto& entry : ans) {
            if(entry.second != 0) {
                return false;
            }
        }

        return true;
    }
};
