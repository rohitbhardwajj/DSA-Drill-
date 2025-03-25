class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        if (length == 1) return;

        k = k % length; 

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
