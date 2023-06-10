class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        int count = 0;
        for(auto it:nums){
            if(it!=val){ 
                count++;
                ans.push_back(it);
            }
        }
        nums = ans;
        return count;
    }
};