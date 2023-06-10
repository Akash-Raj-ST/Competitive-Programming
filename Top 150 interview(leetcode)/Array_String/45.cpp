class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=0;
        int count = 0;

        if(nums.size()==1) return 0;

        while(l<nums.size() && r<nums.size()){
            int high = r;
            for(int j=l;j<=r;j++){
                if(j+nums[j]>high){
                    high  = j+nums[j];
                }
            }
            l = r+1;
            r = high;
            count++;
            if(r>=nums.size()-1){
                return count;
            }
        }
        return -1;
    }
};