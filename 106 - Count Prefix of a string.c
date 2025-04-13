class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            string word = words[i];

            // Check if word is prefix of s
            if (s.substr(0, word.length()) == word) {
                count++;
            }
        }

        return count;
    }
};