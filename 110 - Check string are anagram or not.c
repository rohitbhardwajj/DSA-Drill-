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



// approach-------------------------2








class Solution {
    public:
        bool isAnagram(string s, string t) {
            if(s.length()!=t.length()) return false;
          sort(s.begin(), s.end());
          sort(t.begin(), t.end());
        
    
        int i=0,j=0;
    
    
        while(i<s.length() && j<t.length()){
            if(s[i]!=t[j]) {
                return false;
                break;
            }
            i++;
            j++;
        }
        return true;
        }
    };
    