class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();


        bool row_flag = false, col_flag=false;

        for(int i=0;i<m;i++){
            if(matrix[0][i]==0){
                row_flag = true;
                break;
            }
        }

        for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
                col_flag=true;
                break;
            }
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }


        if(row_flag)
        for(int i=0;i<m;i++){
            matrix[0][i]=0;
        }
        
        if(col_flag)
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
        }
    }
};