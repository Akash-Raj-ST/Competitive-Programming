class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans(n+m);
        int p1=0,p2=0;

        int index=0;
        while(p1<m || p2<n){
            if(p1>=m){
                ans[index++] = nums2[p2++];
            }
            else if(p2>=n){
                ans[index++] = nums1[p1++];
            }else{
                if(nums1[p1]<nums2[p2]){
                    ans[index++] = nums1[p1++];
                }else{
                    ans[index++] = nums2[p2++];
                }
            }
        }

        nums1 = ans;
    }
};