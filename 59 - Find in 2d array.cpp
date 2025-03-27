class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
   int rows = matrix.size();
        int cols = matrix[0].size() - 1;

        int row = 0;
        int col = cols;

        while (row < rows && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] > target) {
                col--;
            } else {
                row++;
            }
        }
        return false;
    }
};