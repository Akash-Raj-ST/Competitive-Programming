class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int n = board.size();
        int m = board[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int dead=0,alive=0;

                if(i-1>=0){
                    if(board[i-1][j]==1 || board[i-1][j]==-2){
                        alive++;
                    }else{
                        dead++;
                    }
                }

                if(i+1<n){
                    if(board[i+1][j]==1 || board[i+1][j]==-2){
                        alive++;
                    }else{
                        dead++;
                    }
                }

                if(j-1>=0){
                    if(board[i][j-1]==1 || board[i][j-1]==-2){
                        alive++;
                    }else{
                        dead++;
                    }
                }

                if(j+1<m){
                    if(board[i][j+1]==1 || board[i][j+1]==-2){
                        alive++;
                    }else{
                        dead++;
                    }
                }

                if(i-1>=0 && j-1>=0){
                    if(board[i-1][j-1]==1 || board[i-1][j-1]==-2){
                        alive++;
                    }else{
                        dead++;
                    }
                }

                if(i+1<n && j-1>=0){
                    if(board[i+1][j-1]==1 || board[i+1][j-1]==-2){
                        alive++;
                    }else{
                        dead++;
                    }
                }

                if(i-1>=0 && j+1<m){
                    if(board[i-1][j+1]==1 || board[i-1][j+1]==-2){
                        alive++;
                    }else{
                        dead++;
                    }
                }

                if(i+1<n && j+1<m){
                    if(board[i+1][j+1]==1 || board[i+1][j+1]==-2){
                        alive++;
                    }else{
                        dead++;
                    }
                }

                if(board[i][j]==1){
                    if(alive<2 || alive>3) board[i][j]=-2;
                }else{
                    if(alive==3) board[i][j]=-1;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==-2) board[i][j]=0;
                else if(board[i][j]==-1) board[i][j]=1;
            }
        }
    }
};