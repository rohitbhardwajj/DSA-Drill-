class Solution {
private:
    vector<int> get(vector<int>& nums, int target, int j) {
        if (j >= nums.size()) return {};

        int val = target - nums[j];
        for (int i = 0; i < nums.size(); i++) {
            if (val == nums[i] && i != j) {
                return {j, i};
            }
        }
        return get(nums, target, j + 1);
    }

public:
    vector<int> twoSum(vector<int>& nums, int target) {
        return get(nums, target, 0);
    }
};


// approach2----------------->>>>>>>




