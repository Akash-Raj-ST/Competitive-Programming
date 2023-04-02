#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

const ll M=1e9+7;

bool isbipartite(vector<vector<int>> arr,int node, vector<bool> &visited,vector<bool> &color,int n,int c=0){

    queue<int> q;
    q.push(node);

    visited[node] = true;

    while(!q.empty()){
        int ele = q.front();
        q.pop();

        for(auto it:arr[ele]){
            if(visited[it]){
                if(color[it]==color[ele]){
                    return false;
                }
            }else{
                visited[it] = true;
                color[it] = !color[ele];
                q.push(it);
            }
        }
    }
    return true;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>> arr(n);

        int e1,e2;
        for(int i=0;i<m;i++){
            cin>>e1>>e2;
            e1--;
            e2--;
            arr[e1].push_back(e2);
            arr[e2].push_back(e1);
        }

        vector<bool> visited(n,0);
        vector<bool> color(n,0);

        bool ans = true;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(!isbipartite(arr,i,visited,color,n)){
                    ans = false;
                    break;
                }
            }
        }

        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }   
}   