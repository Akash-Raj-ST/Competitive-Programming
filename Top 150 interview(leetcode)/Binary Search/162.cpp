class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        int start=0;
        int end = nums.size()-1;
        int mid;

        if(end==0) return 0;

        while(start<=end){
            mid = (start+end)/2;

            if(mid==0){
                if(nums[mid+1]<nums[mid]) return mid;
                else start = mid+1;
            }
            else if(mid==n-1){
                if(nums[mid]>nums[mid-1]) return mid;
                end = mid-1;
            }else{
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
                else if(nums[mid]<nums[mid+1]) start = mid+1;
                else end = mid-1;
            }
        }

        return -1;
    }
};