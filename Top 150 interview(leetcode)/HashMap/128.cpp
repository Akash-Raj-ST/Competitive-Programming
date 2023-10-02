class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,bool> mp;

        vector<int> nums2;

        for(auto it:nums){ 
            if(!mp[it]) nums2.push_back(it);
            mp[it] = true;
        }

        int ans = nums.size()>0?1:0;

        for(auto it:nums2){
            if(mp.find(it-1)==mp.end()){
                int count = 0;
                int ele = it;

                while(mp.find(ele)!=mp.end()){
                    count++;
                    ele++;
                }

                if(count>ans) ans=count;
            }
        }

        return ans;
    }
};