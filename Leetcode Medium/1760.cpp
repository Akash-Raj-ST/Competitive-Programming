class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int sum = 0;

        for(int i=0;i<nums.size();i++) sum += nums[i];

        int count = nums.size() + maxOperations;

        int a = sum%count>0?1:0;

        return sum/count+a;
    }
};