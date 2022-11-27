// https://leetcode.com/problems/available-captures-for-rook/description/

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int rx=-1,ry=-1;

        for(int i=0;i<8;i++){
            for (int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    rx = i;
                    ry = j;
                    break;
                }
            }
            if(!(rx==-1)) break;
        }

        vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};

        int x,y;

        int count = 0;
        for(int i=0;i<4;i++){
            x = rx;
            y = ry;
            while(true){
                if(x+dir[i][0]<8 && x+dir[i][0]>=0 && y+dir[i][1]<8 && y+dir[i][1]>=0){
                    x += dir[i][0];
                    y += dir[i][1];
                    if(board[x][y]=='B') break;
                    else if(board[x][y]=='p'){
                        count++;
                        break;
                    }            
                }else break;
            }
        }
        return count;
        
    }
};