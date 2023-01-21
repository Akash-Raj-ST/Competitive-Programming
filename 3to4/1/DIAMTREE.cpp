#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;


const ll M=1e9+7;
int max_node;

void print(vector<vector<int>> arr){
  int n = arr.size();

  for(int i=0;i<n;i++){
    for(auto it:arr[i]){
      cout<<it<<' ';
    }
    cout<<'\n';
  }
}

void dfs(int node,vector<vector<int>> arr,vector<bool> visited,int count,int &max_count){

    visited[node] = true;
    count++;
    for(auto it: arr[node]){
        if(!visited[it]){
            if(count>=max_count){
                max_count = count;
                max_node = it;
            }

            dfs(it,arr,visited,count,max_count);
        }
    }

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
      int n;
      cin>>n;

      vector<vector<int>> arr(n,vector<int>());

      int a,b;
      for(int i=0;i<n-1;i++){
        cin>>a>>b;
        a--;
        b--;

        arr[a].push_back(b);
        arr[b].push_back(a);
      }

      vector<bool> visited(n,false);

      int count = 0;

      dfs(0,arr,visited,0,count);
      dfs(max_node,arr,visited,0,count);

      
      cout<<count<<'\n';


    }
}
