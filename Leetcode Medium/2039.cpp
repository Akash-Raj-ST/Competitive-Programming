class Solution {
public:
    int networkBecomesIdle(vector<vector<int>>& edges, vector<int>& patience) {
        int n = patience.size();
        
        vector<bool> visited(n,false);

        vector<vector<int>> arr(n);

        for(int i=0;i<edges.size();i++){
                arr[edges[i][0]].push_back(edges[i][1]);
                arr[edges[i][1]].push_back(edges[i][0]);
        }

        vector<int> dist(n);
        dist[0] = 0;

        queue<pair<int,int>> q;
        q.push({0,0});

        while(!q.empty()){
            int node = q.front().first;
            int d = q.front().second;

            q.pop();
            visited[node] = true;

            for(auto it:arr[node]){
                if(!visited[it]){
                    dist[it] = d+1;
                    // cout<<it<<' '<<dist[it]<<'\n';
                    q.push({it,dist[it]});
                    visited[it] = true;
                }
            }
        }

        int last_packet,td,_max=0;
        for(int i=1;i<n;i++){
            last_packet = dist[i]*2%patience[i];
            if(last_packet==0) last_packet=patience[i];

            td = dist[i]*2;
            if(dist[i]*2>patience[i])
                td = (dist[i]*2)+(dist[i]*2-last_packet);
            // cout<<td<<" ";
            if(td>_max) _max = td;
        }

        return _max+1;        
    }
};