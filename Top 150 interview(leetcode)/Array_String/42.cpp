class Solution {
public:
    int trap(vector<int>& height) {
        int n   = height.size();
        vector<int> left(n),right(n);

        left[0] = height[0];
        for(int i=1;i<n;i++){
            if(left[i-1]>height[i]) left[i] = left[i-1];
            else left[i] = height[i];
        }

        right[n-1]  = height[n-1];
        for(int i=n-2;i>=0;i--){
            if(right[i+1]>height[i]) right[i] = right[i+1];
            else right[i] = height[i];
        }

        int ans = 0;

        for(int i=0;i<n;i++){
            ans +=min(left[i],right[i])-height[i];
        }
        return ans;
    }
};