class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = nums[0]<nums[1]?nums[0]:nums[1];
        int max = nums[1]<nums[0]?nums[0]:nums[1];

        for(int i=2;i<nums.size();i++){
            if(nums[i]<min) min=nums[i];
            else if(nums[i]>max) max=nums[i];
        }

        return __gcd(min,max);
    }
};