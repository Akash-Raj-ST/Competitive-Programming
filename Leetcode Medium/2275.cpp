class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        map<int,int> mp;

        for(auto it:candidates){
            int num = it;
            int pos = 0;
            while(num>0){
                mp[pos++] += num%2;
                num = num/2;
            }
        }

        int ans = 0;

        for(auto it:mp){
            if(it.second>ans) ans = it.second;
        }
        return ans;
    }
};