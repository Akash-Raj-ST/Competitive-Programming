class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;

        int ans = 0;
        while(start<=end){
            int mid = (start+end)/2;
            cout<<mid<<' ';
            ans = mid;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        if(nums[ans]>target)
            return ans;
        else
            ans++;
            return ans;
    }
};