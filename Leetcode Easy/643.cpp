// https://leetcode.com/problems/maximum-average-subarray-i/description/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double prev_sum = 0;

        for(int i=0;i<k;i++){
            prev_sum += nums[i];
        }
        int pos=0;
        double sum=0,max=prev_sum;
        for(int i=k;i<nums.size();i++){
            sum = prev_sum - nums[pos++];
            sum += nums[i];

            if(sum>max) max=sum;
            prev_sum = sum;
        }

        return max/k;
    }
};