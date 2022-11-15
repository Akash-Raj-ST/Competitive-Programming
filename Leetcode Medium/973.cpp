// https://leetcode.com/problems/k-closest-points-to-origin/

class Solution {
public:

    int dist(int x,int y){
        x = x*x;
        y = y*y;

        int ans = x+y;

        return ans;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();

        vector<pair<int,int>> arr;

        for(int i=0;i<n;i++){
            arr.push_back({dist(points[i][0],points[i][1]),i});
        }

        sort(arr.begin(),arr.end());

        vector<vector<int>> ans;

        for(int i=0;i<k;i++){
            ans.push_back(points[arr[i].second]);
        }
        return ans;
    }
};