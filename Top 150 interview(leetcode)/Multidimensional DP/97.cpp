class Solution {
public:
    
    static bool solve(string s1,string s2,string s3,int p1,int p2,vector<vector<int>> &dp){
        cout<<p1<<' '<<p2<<'\n';
        if(dp[p1][p2]!=-1) return dp[p1][p2];

        if(p1==s1.length() && p2==s2.length()){
            if(p1+p2==s3.length())
                dp[p1][p2] = 1;
            else
                dp[p1][p2] = 0;
                
            return dp[p1][p2];
        }

        if(p1<s1.length() && s1[p1]==s3[p1+p2]){
            dp[p1][p2] = solve(s1,s2,s3,p1+1,p2,dp);
            if(dp[p1][p2]) return dp[p1][p2];
        }else{
            dp[p1][p2] = 0;
        }
        if(p2<s2.length() && s2[p2]==s3[p1+p2]){
            dp[p1][p2] = solve(s1,s2,s3,p1,p2+1,dp);
            if(dp[p1][p2]) return dp[p1][p2];
        }else{
            dp[p1][p2] = 0;
        }

        return false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.length();
        int m = s2.length();

        vector<vector<int>> dp = vector(n+1,vector<int>(m+1,-1));

        return solve(s1,s2,s3,0,0,dp);
    }
};