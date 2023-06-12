class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int count = m;
        int count2 = n;
        int itr = 0;
        vector<int> ans;

        while(ans.size()<m*n){
            for(int i=itr;i<count && ans.size()<m*n;i++){
                ans.push_back(matrix[itr][i]);
            }
            count--;

            for(int i=itr+1;i<count2 && ans.size()<m*n;i++){
                ans.push_back(matrix[i][m-itr-1]);
            }
            count2--;

            for(int i=m-itr-2;i>=itr && ans.size()<m*n;i--){
                ans.push_back(matrix[n-itr-1][i]);
            }

            for(int i=n-itr-2;i>itr && ans.size()<m*n;i--){
                ans.push_back(matrix[i][itr]);
            }

            itr++;
        }
        return ans;
    }
};