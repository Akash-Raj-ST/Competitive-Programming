class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n+1,0);

        int d1,d7,d30;
        for(int i=n-1;i>=0;i--){
            d1 = costs[0] + dp[i+1];

            int j=i+1;
            while(j<n && days[i]+7>days[j]){
                j++;
            }
            d7 = costs[1] + (j>=n?0:dp[j]);

            while(j<n && days[i]+30>days[j]){
                j++;
            }
            d30 = costs[2] + (j>=n?0:dp[j]);

            dp[i] = min(d1,min(d7,d30));
        }
        return dp[0];
    }
};