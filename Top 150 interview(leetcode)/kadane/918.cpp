class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();

        int total = 0;
        for(auto it:nums) total+=it;

        vector<int> min_arr(n);
        vector<int> max_arr(n);

        min_arr[0] = nums[0];
        max_arr[0] = nums[0];

        for(int i=1;i<n;i++){
            if(nums[i]+min_arr[i-1]<nums[i]) min_arr[i] = nums[i]+min_arr[i-1];
            else min_arr[i] = nums[i];

            if(nums[i]+max_arr[i-1]>nums[i]) max_arr[i] = nums[i]+max_arr[i-1];
            else max_arr[i] = nums[i];
        }

        int min_val = min_arr[0];
        int max_val = max_arr[0];

        for(int i=0;i<n;i++){
            if(min_arr[i]<min_val)
                min_val = min_arr[i];
            if(max_arr[i]>max_val)
                max_val = max_arr[i];
        }
        
        if(total-min_val==0){
            return max_val;
        }else{
            return max(total-min_val,max_val);
        }


    }
};