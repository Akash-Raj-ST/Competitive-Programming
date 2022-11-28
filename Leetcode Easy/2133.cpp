// https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/description/

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        int n = matrix.size();

        for(int i=0;i<n;i++){
            map<int,int> mp_row;
            map<int,int> mp_col;
            for(int j=0;j<n;j++){
                if(mp_row[matrix[i][j]]==0) mp_row[matrix[i][j]]=1;
                else return false;
                if(mp_col[matrix[j][i]]==0) mp_col[matrix[j][i]]=1;
                else return false;
            }
        }  
        return true;
    }
};