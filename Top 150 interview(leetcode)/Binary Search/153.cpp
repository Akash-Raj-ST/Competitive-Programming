class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s=0,e=n-1;
        int mid,ans=0;
        while(s<=e){
            mid = (s+e)/2;
            cout<<s<<":"<<e<<':'<<mid<<' ';      
            ans = nums[mid]<nums[ans]?mid:ans;
            if(nums[e]<=nums[mid]){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        return nums[ans];
    }
};