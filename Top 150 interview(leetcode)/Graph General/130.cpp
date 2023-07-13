class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
        queue<pair<int,int>>  q;

        int n = board.size();
        int m = board[0].size();

        vector<vector<bool>> visited(n,vector<bool>(m));

        for(int i=0;i<m;i++) {
            if(board[0][i]=='O'){
                q.push({0,i});
                board[0][i] = '-';
            }
            visited[0][i] = true;
        }
        for(int i=0;i<n;i++) {
            if(board[i][0]=='O'){
                q.push({i,0});
                board[i][0] = '-';
            }
            visited[i][0] = true;
        }
        for(int i=0;i<m;i++) {
            if(board[n-1][i]=='O'){
                q.push({n-1,i});
                board[n-1][i] = '-';
            }
            visited[n-1][i] = true;
        }
        for(int i=0;i<n;i++) {
            if(board[i][m-1]=='O'){
                q.push({i,m-1});
                board[i][m-1] = '-';
            }
            visited[i][m-1] = true;
        }


        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if(x+1<n && !visited[x+1][y] && board[x+1][y]=='O'){
                board[x+1][y] = '-';
                visited[x+1][y] = true;
                q.push({x+1,y});
            }
            if(y+1<m && !visited[x][y+1] && board[x][y+1]=='O'){
                board[x][y+1] = '-';
                visited[x][y+1] = true;
                q.push({x,y+1});
            }
            if(x-1>=0 && !visited[x-1][y] && board[x-1][y]=='O'){
                board[x-1][y] = '-';
                visited[x-1][y] = true;
                q.push({x-1,y});
            }
            if(y-1>=0 && !visited[x][y-1] && board[x][y-1]=='O'){
                board[x][y-1] = '-';
                visited[x][y-1] = true;
                q.push({x,y-1});
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='-') board[i][j] = 'O';
                else board[i][j]='X';
            }
        }
    }
};
