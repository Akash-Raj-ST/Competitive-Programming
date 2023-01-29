class Solution {
public:
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        vector<vector<int>> arr(n);

        for(auto it: edges){
            arr[it[0]].push_back(it[1]);
        }
        queue<vector<double>> q;
        q.push({1,1,0});

        bool found = false;
        double ans = 0;

        while(!q.empty()){
            double node = q.front()[0];
            double prob = q.front()[1];
            double time = q.front()[2];
            cout<<node<<' '<<prob<<' '<<time<<'\n';
            if(time>t || found) break;

            q.pop();

            double s = arr[node].size();
            for(auto it: arr[node]){
                if(it==target){
                    found = true;
                    ans = prob*1/s;
                    break;
                }
                q.push({(double)it,prob*1/s,time+1});
            }
        }

        return ans;

    }
};