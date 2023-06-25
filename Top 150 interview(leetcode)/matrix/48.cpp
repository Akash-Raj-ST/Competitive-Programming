class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        pair<int,int> n1,n2,n3,n4;

        int temp;

        for(int i=0;i<n;i++){
            n1 = {i,i};
            n2 = {i,n-1-i};
            n3 = {n-1-i,n-1-i};
            n4 = {n-1-i,i};

            for(int j=i;j<n-i-1;j++){
                temp = matrix[n1.first][n1.second];
                
                matrix[n1.first][n1.second] = matrix[n4.first][n4.second];
                matrix[n4.first][n4.second] = matrix[n3.first][n3.second];
                matrix[n3.first][n3.second] = matrix[n2.first][n2.second];
                matrix[n2.first][n2.second] = temp;

                n1.second++;
                n2.first++;
                n3.second--;
                n4.first--;
            }
        }
    }
};