// https://leetcode.com/problems/find-the-most-competitive-subsequence/description/

class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> stack;
        int del = n-k;
        for(int i=0;i<n;i++){

            while(!stack.empty() && nums[i]<stack.back() && del){
                del--;
                stack.pop_back();
            }
            stack.push_back(nums[i]);
        }
        return vector<int>(stack.begin(),stack.begin()+k);
    }
};