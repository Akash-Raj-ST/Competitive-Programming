class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();

        queue<pair<int,int>> q;
        q.push({0,0});

        int ans = INT_MAX;
        vector<bool> visited(n,false);

        while(!q.empty()){
            int node = q.front().first;
            int dist = q.front().second;

            q.pop();

            if(node==n-1){
                if(dist<ans) ans=dist;
            }

            for(int i=node+1;i<=min(node+nums[node],n-1);i++){
                if(!visited[i]){
                    q.push({i,dist+1});
                    visited[i] = true;
                }
            }
        }

        return ans;
    }
};