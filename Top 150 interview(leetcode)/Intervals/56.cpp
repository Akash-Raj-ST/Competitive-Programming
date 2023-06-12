class Solution {
public:
    static bool cmp(vector<int> a,vector<int> b){
        return a[0]<b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end(),cmp);

        vector<vector<int>> ans;

        int start = intervals[0][0];
        int end = intervals[0][1];

        for(int i=1;i<intervals.size();i++){
            int curr_start = intervals[i][0];
            int curr_end = intervals[i][1];

            if(curr_start<=end){
                end = max(end,curr_end);
            }else{
                ans.push_back(vector<int>{start,end});
                start = curr_start;
                end = curr_end;
            }
          
        }

        ans.push_back(vector<int>{start,end});

        return ans;
    }
};