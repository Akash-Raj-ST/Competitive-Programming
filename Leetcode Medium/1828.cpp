class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        vector<int> ans;
        int c_x,c_y,r,count;
        float dist;
        for(int i=0;i<queries.size();i++){
            c_x = queries[i][0];
            c_y = queries[i][1];
            r = queries[i][2];

            count = 0;
            for(int j=0;j<points.size();j++){
                dist = (float) sqrt((c_x-points[j][0])*(c_x-points[j][0])+(c_y-points[j][1])*(c_y-points[j][1]));
                if(dist<=r){
                    count++;
                }
            }
            ans.push_back(count);
        }

        return ans;
    }
};