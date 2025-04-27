class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int row = image.size();
        int col = image[0].size();
     
        for(int i=0 ; i<row ; i++){
            int k=0 ,l=image[0].size()-1;
            while(k<l){
                int temp = image[i][k];
                image[i][k] = image[i][l];
                image[i][l] = temp;
                k++;
                l--;
            }
        }
        for(int i=0 ; i<row ; i++){
         
         for(int j=0 ; j<col ; j++){
            if(image[i][j]==0){
                image[i][j]=1;
            }else{
                image[i][j]=0;
            }
         }
        }
        return image;
    }
};