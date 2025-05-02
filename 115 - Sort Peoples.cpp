class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        // Use map to store height → name
        map<int, string> ans;

        for (int i = 0; i < heights.size(); i++) {
            ans[heights[i]] = names[i];  // corrected this line
        }

        // Sort heights in descending order
        sort(heights.begin(), heights.end(), greater<int>());

        // Create result vector
        vector<string> result;
        for (int i = 0; i < heights.size(); i++) {
            result.push_back(ans[heights[i]]);
        }

        return result;
    }
};
