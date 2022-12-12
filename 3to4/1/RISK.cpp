#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
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

    ll t;
    cin>>t;

    while(t--){
    	ll n,m;
    	cin>>n>>m;

    	vector<vector<ll>> arr(n+1,vector<ll>(m+1));
      vector<vector<bool>> visited(n+1,vector<bool>(m+1,false));


    	char ch;
    	for(ll i=0;i<n;i++){
    		for(ll j=0;j<m;j++){
    			cin>>ch;
    			if(ch=='1') arr[i][j]=1;
    			else arr[i][j]=0;
    		}
    	}

      vector<ll> ans;
    	ll sum;
    	for(ll i=0;i<n;i++){
    		for(ll j=0;j<m;j++){

    			sum = 0;
          queue<pair<ll,ll>> q;

          if(!visited[i][j] && arr[i][j]==1){
            q.push({i,j});
          }

          while(!q.empty()){
            ll x = q.front().first;
            ll y = q.front().second;

      			sum += arr[x][y];
            visited[x][y] = true;

            if(x>0){
              if(!visited[x-1][y] && arr[x-1][y]==1){
                q.push({x-1,y});
              }
                visited[x-1][y] = true;
            }
            if(y>0){
              if(!visited[x][y-1] && arr[x][y-1]==1){
                q.push({x,y-1});
              }
                visited[x][y-1] = true;
            }
            if(x<n){
              if(!visited[x+1][y] && arr[x+1][y]==1){
                q.push({x+1,y});
              }
                visited[x+1][y] = true;
            }
            if(y<m){
              if(!visited[x][y+1] && arr[x][y+1]==1){
                q.push({x,y+1});
              }
                visited[x][y+1] = true;
            }
            q.pop();
          }
          if(sum>0)
            ans.push_back(sum);
    		}
    	}

    	sort(ans.begin(),ans.end(),greater<>());

    	bool ok=false;
    	ll total = 0;
    	for(auto it:ans){
    		if(ok){
    			total += it;
    			ok=false;
    		}else{
    			ok=true;
    		}
    	}

    	cout<<total<<'\n';
    }
}
	