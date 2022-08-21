#include <iostream>
#include <vector>
#include <climits>
#define ll long long int

#define V 6
using namespace std;

const int INF = INT32_MAX;

void print(int dist[],int src){
    for(int i=0;i<V;i++){
        cout<<src+1<<" -> "<<i+1<<" "<<dist[i]<<"\n";
    }
}

int min_distance(int dist[],bool visited[]){

    int min = INF, min_index=-1;
    for(int i=0;i<V;i++){
        if(dist[i]<=min && !visited[i]){
            min = dist[i];
            min_index = i;
        }
    }

    return min_index;
}

void solve(int graph[][V] ,int source){
    bool visited[V];

    for(int i=0;i<V;i++) visited[i]=false;

    int dist[V];
    for(int i=0;i<V;i++) dist[i] = INF;
    dist[source] = 0;

    for(int i=0;i<V-1;i++){
        int u = min_distance(dist,visited);
        visited[u] = true;

        for(int ve=0;ve<V;ve++){
            cout<<"min: "<<u<<"\n";
            if(!visited[ve] && graph[u][ve]!=INF && dist[u]!=INF && dist[u]+graph[u][ve]<dist[ve]){
                dist[ve] = dist[u]+graph[u][ve];
                cout<<"vertex: "<<ve+1<<" "<<dist[ve]<<"\n";
            }
        }
    }

    print(dist,source);
     
}


int main(){
    int graph[][V] = {
                        {0,12,13,INF,INF,INF},
                        {12,0,INF,8,6,INF},
                        {13,INF,0,6,INF,INF},
                        {INF,8,7,0,10,5},
                        {INF,6,INF,10,0,INF},
                        {INF,INF,INF,5,INF,0}
                    };

    solve(graph,3);
}