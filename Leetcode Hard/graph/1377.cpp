class Solution {
public:
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        if(n==1) return 1;
        if(target==1){
            return 0;
        }

        vector<vector<int>> arr(n+1);

        for(auto it: edges){
            arr[it[0]].push_back(it[1]);
            arr[it[1]].push_back(it[0]);
        }

        queue<vector<double>> q;
        q.push({1,1,0});

        bool found = false;
        double ans = 0;
        
        vector<bool> visited(n+1,false);
        visited[1] = true;

        while(!q.empty()){
            double node = q.front()[0];
            double prob = q.front()[1];
            double time = q.front()[2];
            cout<<node<<' '<<prob<<' '<<time<<'\n';
            if(time>=t || found) break;

            q.pop();

            double s = 0;
            for(auto it:arr[node]){
                if(!visited[it]) s++;
            }
            
            for(auto it: arr[node]){

                if(it==target){
                    cout<<"found at "<<node<<'\n';
                    found = true;
                    ans = prob*1/s;
                    
                    if(time+1<t)
                        for(auto it2: arr[it]){
                            if(!visited[it2]){
                                ans = 0;
                                break;
                            }
                        }
                    break;
                }

                if(!visited[it]){
                    q.push({(double)it,prob*1/s,time+1});
                    visited[it] = true;
                }
            }
        }

        if(!found) return 0;
        return ans;

    }
};