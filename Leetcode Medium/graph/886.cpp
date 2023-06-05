class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vector<vector<int>> adj(n);

        for(int i=0;i<dislikes.size();i++){
            adj[dislikes[i][0]-1].push_back(dislikes[i][1]-1);
            adj[dislikes[i][1]-1].push_back(dislikes[i][0]-1);
        }

        vector<bool> visited(n,false);
        vector<int> color(n,-1);
        queue<int> q;

        for(int i=0;i<n;i++){
            if(visited[i]) continue;

            q.push(i);
            color[i] = 0;

            while(!q.empty()){
                int node = q.front();
                visited[node] = true;
                q.pop();

                for(auto it:adj[node]){
                    if(visited[it]){
                        if(color[it]==color[node]){
                            return false;
                        }
                    }else{
                        color[it] = !color[node];
                        visited[it] = true;
                        q.push(it);
                    }
                }
            }
        }

        return true;
    }
};