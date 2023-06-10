class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        map<int,int> mp;    

        for(int i=0;i<n;i++){
            mp[nums[i]] = i;
        }

        vector<vector<int>> ans;

        for(int i=0;i<n-2;i++){
            if(nums[i]>0) break;
            if(i!=0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1;j<n-1;j++){
                int req = -1*(nums[i]+nums[j]);
                if(j!=i+1 && nums[j]==nums[j-1]) continue;
                if(mp.find(req)!=mp.end()){
                    if(mp[req]>j)
                        ans.push_back(vector<int>{nums[i],nums[j],req});
                }
            }
        }

        return ans;
    }
};