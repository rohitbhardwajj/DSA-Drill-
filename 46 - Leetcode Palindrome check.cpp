class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ans;
        vector<char> duplicate;

        for(int i=0 ; i<s.length() ; i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A'&& s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                ans.push_back(tolower(s[i]));
            }
        }
       duplicate = ans;
        reverse(duplicate.begin() ,duplicate.end());
       return ans==duplicate;
    }
};