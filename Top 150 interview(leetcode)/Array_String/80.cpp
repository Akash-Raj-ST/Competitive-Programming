class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mp;

        for(auto it:nums){
            if(mp[it]<2){
                mp[it]++;
                ans.push_back(it);
            }
        }

        nums = ans;
        return ans.size();
    }
};