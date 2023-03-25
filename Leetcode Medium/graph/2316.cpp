class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        vector<vector<long long>> arr(n);

        for(int i=0;i<edges.size();i++){
            arr[edges[i][0]].push_back(edges[i][1]);
            arr[edges[i][1]].push_back(edges[i][0]);
        }

        vector<long long> group;

        vector<bool> visited(n,false);

        for(int i=0;i<n;i++){
            queue<long long> q;
            q.push(i);
            int count = 0;

            if(!visited[i]){
                while(!q.empty()){
                    int node = q.front();
                    q.pop();

                    if(!visited[node]){
                        count++;

                        visited[node] = true;

                        for(auto it:arr[node]){
                            if(!visited[it]){
                                q.push(it);
                            }
                        }
                    }
                }

                group.push_back(count);
            }
        }

        long long ans = 0;
        
        for(int i=0;i<group.size() && n>0;i++){
            n -= group[i];
            ans = ans +(group[i] * n); 
        }

        return ans;
    }
};