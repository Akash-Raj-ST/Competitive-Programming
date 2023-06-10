class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1=0,p2=height.size()-1;
        
        int ans = 0;

        while(p1<p2){
            int width = p2-p1;
            int _height = min(height[p1],height[p2]);

            int area = width*_height;

            if(area>ans) ans=area;

            if(height[p1]>height[p2]) p2--;
            else p1++;
        }
        return ans;
    }
};