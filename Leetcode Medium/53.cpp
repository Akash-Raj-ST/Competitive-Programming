// https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();

        int sum = nums[0];
        int max = sum;
        for(int i=1;i<n;i++){
            if(sum+nums[i]>nums[i]){
                sum += nums[i];
                if(max<sum) max=sum;
            }
            else sum = nums[i]; 
        }

        return max;
    }
};