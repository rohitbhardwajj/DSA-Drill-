class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<vector<int>> temp(col, vector<int>(row)); 
        
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                temp[j][i] = matrix[i][j];
            }
        }
        return temp;
    }
};




// approach----2





// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         int row = matrix.size();
//         int col = matrix[0].size();
        
//         vector<vector<int>> temp(col); // ✅ Outer vector with col size
        
//         for (int i = 0; i < col; i++) {
//             temp[i].resize(row); // ✅ Resize each inner vector to row size
//         }
        
//         for (int i = 0; i < row; i++) {
//             for (int j = 0; j < col; j++) {
//                 temp[j][i] = matrix[i][j]; // ✅ Correct indexing
//             }
//         }
//         return temp;
//     }
// };
