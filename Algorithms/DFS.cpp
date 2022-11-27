#include <vector>
#include <iostream>
using namespace std;

int V = 5;
vector<vector<int>> adj;
vector<bool> visited(V,false);

void dfs(int node){
    
    cout<<node<<" ";
    visited[node] = true;

    for(int i=0;i<adj.size();i++){
        if(!visited[i] && adj[node][i]==1){
            dfs(i);
        }
    }

}


int main(){


    adj = {
        {0,1,1,0,1},
        {1,0,0,1,1},
        {1,0,0,0,0},
        {0,1,0,0,0},
        {1,0,0,0,0}
    };

    int start = 0;

    dfs(start);
}