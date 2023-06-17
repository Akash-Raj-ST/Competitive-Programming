class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i=triangle.size()-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};

//using DP
class Solution {
public:

    int dfs(vector<vector<int>> &tri,int x,int y,vector<vector<int>> &dp){
        if(x==tri.size()-1){
            return  tri[x][y];
        }

        if(dp[x][y]!=-1) return dp[x][y];

        dp[x][y] = tri[x][y]+min(dfs(tri,x+1,y,dp),dfs(tri,x+1,y+1,dp));
        return dp[x][y];
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        int ans = dfs(triangle,0,0,dp);

        return ans;
    }
};