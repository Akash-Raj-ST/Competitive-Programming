#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> adj;

void bfs(int start){
    //intializing
    vector<bool> visited(adj.size(),false);
    vector<int> q;
    vector<int> distance(adj.size(),0);


    q.push_back(start);

    visited[start] = true;

    int node;
    while(!q.empty()){
        node = q[0];
        q.erase(q.begin());

        cout<<node<<" ";
        for(int i=0;i<adj.size();i++){
            if(adj[node][i]==1 and !visited[i]){
                visited[i] = true;
                cout<<"node: "<<i<<" ";
                distance[i] = distance[node]+1;
                q.push_back(i);
            }
        }
        cout<<"\n";
    }

    cout<<"\n";
    for(int i=0;i<adj.size();i++){
        cout<<distance[i]<<" ";
    }

}


int main(){
    int V=5;

    adj = {
        {0,1,1,1,0},
        {1,0,0,0,0},
        {1,0,0,0,1},
        {1,0,0,0,0},
        {0,0,1,0,0}
    };

    int start = 2;
    bfs(start);
}