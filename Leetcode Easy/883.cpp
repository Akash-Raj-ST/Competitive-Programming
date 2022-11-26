// https://leetcode.com/problems/projection-area-of-3d-shapes/description/

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans=0;
        int n = grid.size();

        for(int i=0;i<n;i++){
            int max1 = 0;
            int max2 = 0;
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0) ans ++;

                max1 = max(max1,grid[i][j]);
                max2 = max(max2,grid[j][i]);
            }
            ans += max2;
            ans += max1;
        }

        return ans;

    }
};