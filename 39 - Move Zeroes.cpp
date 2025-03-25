class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int count=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }else{
                count++;
            }
        }
        for(int i=0 ; i<count ; i++){
            ans.push_back(0);
        }
        for(int i=0 ; i<nums.size() ; i++){
            nums[i]=ans[i];
        }
        
    }
};

// approach 2

// class Solution {
//     public:
//         void moveZeroes(vector<int>& nums) {
//             int j = 0; 
            
//             for (int i = 0; i < nums.size(); i++) {
//                 if (nums[i] != 0) {
//                     swap(nums[i], nums[j]);
//                     j++;
//                 }
//             }
//         }
//     };
    