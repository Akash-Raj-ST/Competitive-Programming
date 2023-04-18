class Solution {
public:
    vector<int> minDifference(vector<int>& nums, vector<vector<int>>& queries) {
        int dp[100001][101];

        for(int i=0;i<nums.size();i++){
            for(int j=1;j<=100;j++){
                dp[i+1][j] = dp[i][j] + (nums[i]==j);
            }
        }

        vector<int> ans;

        for(auto it: queries){
            int l = it[0],r=it[1]+1;
            int prev=0, del = INT_MAX;
            int val;

            for(int i=1;i<=100;i++){
                if(dp[l][i]!=dp[r][i]){
                    if(prev!=0){
                        val = i-prev;
                        del = min(del,val);
                    }
                    prev = i;
                }
            }
            ans.push_back(del==INT_MAX?-1:del);
        }

        return ans;
    }
};