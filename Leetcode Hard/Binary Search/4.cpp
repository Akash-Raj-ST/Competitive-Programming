class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            swap(nums1,nums2);
        }

        int n = nums1.size();
        int low=0,high=n,mid1;

        int ele_count = (nums1.size()+nums2.size());
        bool is_even = ele_count%2==0;

        int half_size = (ele_count+1)/2;

        int l1,r1,r2,l2,mid2;

        while(low<=high){
            mid1 = (low+high)>>1;

            l1 = INT_MIN;
            r1 = INT_MAX;
            
            l2 = INT_MIN;
            r2 = INT_MAX;

            mid2 = half_size-mid1;

            if(mid1<nums1.size()) r1 = nums1[mid1];
            if(mid2<nums2.size()) r2 = nums2[mid2];

            if(mid1-1>=0) l1 = nums1[mid1-1];
            if(mid2-1>=0) l2 = nums2[mid2-1];

            cout<<l1<<' '<<r1<<' '<<l2<<' '<<r2<<'\n';

            if(l1<=r2 && l2<=r1){
                if(is_even){
                    return (double)((max(l1,l2)+min(r1,r2)))/2;
                }
                return max(l1,l2);
            }else if(l1>r2){
               high = mid1-1;
            }else{
                low = mid1+1;
            }

        }
        return 0;
        
    }
};