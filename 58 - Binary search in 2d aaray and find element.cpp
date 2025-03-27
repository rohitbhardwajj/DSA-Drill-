class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
    
    int start=0;
    int end = row*col-1;
    
    
    while(start<=end){
        int mid = (start+end)/2;
        int elem = matrix[mid/col][mid%col];
        if(target==elem){
           return 1;
        } else if(elem>target){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }return 0;
    }
};