#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;


const ll M=1e9+7;


int main(){
     #ifndef ONLINE_JUDGE
       freopen("../../input.txt","r",stdin); 
       freopen("../../output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t = 1;

    while(t--){
      int root;


      int n,manager,we;
      cin>>n;

      vector<vector<int>> arr(n);
      vector<int> wealth;
      

      for(int i=0;i<n;i++){
        cin>>we;
        wealth.push_back(we);
      }

      for(int i=0;i<n;i++){
        cin>>manager;
        if(manager==-1){
          root = i;
        }else{
          manager--;
          arr[manager].push_back(i);
        }
      }

      queue<pair<int,int>> q;

    
      q.push({root,wealth[root]});
      int diff = 0;

      while(!q.empty()){
        int curr_node = q.front().first;
        int node_wealth = q.front().second;

        q.pop();

        for(auto it: arr[curr_node]){
          if(node_wealth-wealth[it]>diff){
            diff = node_wealth-wealth[it];
          }
          if(wealth[it]>node_wealth)
            q.push({it,wealth[it]});
          else
            q.push({it,node_wealth});
        }
      }

      cout<<diff<<'\n';
    }
}
