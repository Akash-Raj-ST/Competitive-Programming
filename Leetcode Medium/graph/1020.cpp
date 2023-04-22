class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n,vector<bool>(m,false));

        queue<pair<int,int>> q;

        int i=0,j;
        for(j=0;j<m;j++) q.push({i,j});
        
        j=0;
        for(i=1;i<n;i++) q.push({i,j});

        j=m-1;
        for(i=1;i<n;i++) q.push({i,j});

        i=n-1;
        for(j=1;j<m-1;j++) q.push({i,j});

        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;

            q.pop();

            if(!visited[x][y]){
                visited[x][y] = true;

                if(grid[x][y]==1){
                    grid[x][y]=2;
                    if(x+1<n && grid[x+1][y]==1){
                        if(!visited[x+1][y]){
                            q.push({x+1,y});
                        }
                    }
                    if(y+1<m && grid[x][y+1]==1){
                        if(!visited[x][y+1]){
                            q.push({x,y+1});
                        }
                    }
                    if(x-1>0 && grid[x-1][y]==1){
                        if(!visited[x-1][y]){
                            q.push({x-1,y});
                        }
                    }
                    if(y-1>0 && grid[x][y-1]==1){
                        if(!visited[x][y-1]){
                            q.push({x,y-1});
                        }
                    }
                }
            }
        }

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};