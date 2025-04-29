class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        map<char , int> s;

        for(auto c : stones){
            s[c]++;
        }
        int ans=0;
        for(auto x : jewels){
            ans+= s[x];
        }

        return ans;
    }
};