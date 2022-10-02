class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int it:nums) mp[it]++;

        int count=0;

        if(k==0){
            for(auto it:mp){
                if(it.second>1) count++;
            }
            return count;
        }

        vector<int> need;

        for(auto it:mp) need.push_back(it.first-k);

        for(auto it:need){
            if(mp.find(it)!=mp.end()){
                count++;
            }
        }

        return count;
    }
};