class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;

        for(auto it:nums) mp[it]++;

        int max = 0,ans = -1;

        for(auto it:mp){
            if(it.second>max){
                max = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};