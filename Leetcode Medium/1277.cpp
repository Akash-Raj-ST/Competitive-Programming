class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][j-1]!=0 && matrix[i-1][j]!=0 && matrix[i-1][j-1]!=0){
                        matrix[i][j] = min(matrix[i][j-1],min(matrix[i-1][j],matrix[i-1][j-1]))+1;
                    }
                }
            }
        }

        int ans = 0;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                ans += matrix[i][j];
            }
        }
        return ans;
    }
};