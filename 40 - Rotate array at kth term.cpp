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



// approach 2
// class Solution {
//     public:
//         void rotate(vector<int>& nums, int k) {
             
//              vector<int> temps(nums.size());
//              for(int i=0 ; i<nums.size() ;i++){
//                 temps[(i+k)%nums.size()] = nums[i];
//              }
//              nums =temps;
//         }
//     };
