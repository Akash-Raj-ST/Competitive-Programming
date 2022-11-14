// https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.length;

        vector<int> arr(n+1,0);
        arr[0] = nums[0];

        for(int i=1;i<n;i++){
            if(arr[i-1]+nums[i]>nums[i]) arr[i] =arr[i-1]+nums[i];
            else arr[i] = nums[i]; 
        }

        int max = arr[0];

        for(int i=1;i<n;i++){
            if(arr[i]>max) max = arr[i];
        }

        return max;
    }
};