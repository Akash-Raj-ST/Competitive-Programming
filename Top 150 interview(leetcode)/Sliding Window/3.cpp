class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;

        if(s.length()==0) return 0;

        vector<int> dp(s.length(),0);

        dp[0] = 1;
        mp[s[0]] = 0;

        int ans = 1;
        for(int i=1;i<s.length();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]] = i;
                dp[i] = dp[i-1]+1;
            }else{
                dp[i] = min(i-mp[s[i]],dp[i-1]+1);
                mp[s[i]] = i;
            }
            ans = max(ans,dp[i]);
        }

        return ans;
    }
};