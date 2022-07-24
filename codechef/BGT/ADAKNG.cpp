#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int r,c,k;
        cin>>r>>c>>k;

        vector<vector<bool>> visited(9,vector<bool>(9,false));

        queue<pair<int,int>> q;

        q.push({r,c});

        vector<pair<int,int>> moves{{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{-1,1},{1,-1}};
        vector<vector<int>> count(9,vector<int>(9,-1));

        int x,y;
        int n_x,n_y;

        count[r][c] = 0;
        visited[r][c] = true;

        while(!q.empty()){

            x = q.front().first;
            y = q.front().second;

            q.pop();

            for(int i=0;i<8;i++){
                n_x = x+moves[i].first;
                n_y = y+moves[i].second;
                if(n_x>0 && n_y>0 && n_x<=8 && n_y<=8 && !visited[n_x][n_y]){
                    q.push({n_x,n_y});
                    visited[n_x][n_y] = true;
                    count[n_x][n_y] = count[x][y]+1;
                }
            }
        }

        int ans=0;
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                if(count[i][j]<=k) ans++;
            }
        }
        cout<<ans<<"\n";
    }
}