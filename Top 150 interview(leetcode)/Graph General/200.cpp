class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n,vector<bool>(m,false));

        queue<pair<int,int>> q;
        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j] || grid[i][j]=='0') continue;

                q.push({i,j});
                visited[i][j] = true;

                ans++;
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    

                    q.pop();

                    if(x+1<n && !visited[x+1][y] && grid[x+1][y]=='1'){
                        visited[x+1][y] = true;
                        q.push({x+1,y});
                    }

                    if(y+1<m && !visited[x][y+1] && grid[x][y+1]=='1'){
                        visited[x][y+1] = true;
                        q.push({x,y+1});
                    }

                    if(x-1>=0 && !visited[x-1][y] && grid[x-1][y]=='1'){
                        visited[x-1][y] = true;
                        q.push({x-1,y});
                    }

                    if(y-1>=0 && !visited[x][y-1] && grid[x][y-1]=='1'){
                        visited[x][y-1] = true;
                        q.push({x,y-1});
                    }
                }
            }
        }

        return ans;
    }
};