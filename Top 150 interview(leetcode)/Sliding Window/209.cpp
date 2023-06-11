class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0,start=0;
        int min_len = INT_MAX;

        for(int end=0;end<n;end++){
            sum += nums[end];

            while(sum>=target){
                min_len = min(min_len,end-start+1);
                sum -= nums[start];
                start++;
            }
        }

        if(min_len!=INT_MAX) return min_len;
        return 0;
    }
};