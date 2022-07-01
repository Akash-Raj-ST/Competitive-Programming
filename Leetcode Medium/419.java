//419. Battleships in a Board
//https://leetcode.com/problems/battleships-in-a-board/

class Solution {
    public int countBattleships(char[][] board) {
        int n = board.length;
        int m = board[0].length;
        
        int count = 0;
        for(int i=0;i<n;i++){
            boolean found = false;
            for(int j=0;j<m;j++){
                if(board[i][j]=='X'){
                    if(i-1>=0){
                        if(board[i-1][j]!='X'){
                            found = true;
                        }
                    }else{
                        found = true;
                    }
                    
                }else{
                    if(found){
                        count++;
                        found = false;
                    }                  
                }
            }
            if(found) count++;
        }
        return count;
    }
}