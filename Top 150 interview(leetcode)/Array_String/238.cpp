class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        int zero = 0;

        for(auto it:nums){
            if(it==0) zero++;
            else total *= it;
        }

        vector<int> ans(nums.size(),0);

        if(zero>1) return ans;

        for(int i=0;i<nums.size();i++){
            if(zero){
                if(nums[i]==0) ans[i]=total;
            }else{
                ans[i] = total/nums[i];
            }
        }

        return ans;
    }
};