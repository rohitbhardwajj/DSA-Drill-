#include <algorithm> // important
class Solution {
public:
    char repeatedCharacter(string s) {
       
     map<char, int> ans;

        for (char c : s) {
            ans[c]++;
            if (ans[c] == 2) {
                return c;
            }
        }

        
        return ' ';

    }
};
