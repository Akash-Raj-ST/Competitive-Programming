class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();

        vector<int> arr(n*n,-1);

        int r=n-1;
        int square = 0;
        while(r>=0){
            for(int i=0;i<n;i++){
                arr[square++] = board[r][i];
            }
            r--;
            if(r<0) break;
            for(int i=n-1;i>=0;i--){
                arr[square++] = board[r][i];
            }
            r--;
        }

        //<square,moves>

        queue<tuple<int,int>> q;
        q.push({0,0});

        vector<bool> visited(n*n,false);
        visited[0] = true;

        int ans = INT_MAX;
        while(!q.empty()){
            int sq,moves;

            tie(sq,moves) = q.front();
            q.pop();

            if(sq==(n*n)-1 && moves<ans){
                ans = moves;
            }

            for(int i=1;i<=6;i++){
                if(sq+i < n*n && !visited[sq+i]){
                    if(arr[sq+i]==-1){
                        q.push({sq+i,moves+1});
                    }else{
                        q.push({arr[sq+i]-1,moves+1});
                    }
                    visited[sq+i] = true;
                }
            }
        }

        if(ans==INT_MAX) return -1;
        return ans;
    }
};














