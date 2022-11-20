// https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m =nums2.size();

        int ans=0,i=0,pos=0;
        while(i<n && pos<m){
            if(i>pos) pos=i;

            if(nums1[i]<=nums2[pos]){
                if(pos-i>ans) ans=pos-i;
                pos++;
            }else{
                i++;
            }
        }
        return ans;
    }
};