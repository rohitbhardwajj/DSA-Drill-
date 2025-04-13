class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int count=0;
        for(int i =0 ; i<jewels.length() ; i++){
            for(int j=0 ; j<stones.length() ; j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};


// approach---------------2


class Solution {
    public:
        int numJewelsInStones(string jewels, string stones) {
            map<char, int> ans;
    
            // Count frequency of each stone
            for (char c : stones) {
                ans[c]++;
            }
    
            int storeCount = 0;
    
            // Check for each jewel in map
            for (char j : jewels) {
                storeCount += ans[j];  // will add 0 if jewel not present
            }
    
            return storeCount;
        }
    };
    

