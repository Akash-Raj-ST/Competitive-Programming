class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,bool> mp;

        //rows
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(mp[board[i][j]]){
                    return false;
                }
                mp[board[i][j]] = true;
            }
            mp = {};
        }

        //columns
         for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i]=='.') continue;
                if(mp[board[j][i]]){
                    return false;
                }
                mp[board[j][i]] = true;
            }
            mp = {};
        }

        //box
        for(int x=0;x<9;x+=3){
            for(int y=0;y<9;y+=3){
                for(int i=x;i<x+3;i++){
                    for(int j=y;j<y+3;j++){
                        if(board[i][j]=='.') continue;
                        if(mp[board[i][j]]) return false;
                        mp[board[i][j]] = true;
                    }
                }
                mp = {};
            }
        }

        return true;
    }
};