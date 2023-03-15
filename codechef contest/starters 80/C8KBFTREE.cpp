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

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll> xorArr(n+1);

        vector<vector<pair<ll,ll>>> arr(n+1);

        ll x,y,w;
        for(ll i=0;i<n-1;i++){
            cin>>x>>y>>w;
            arr[x].push_back({y,w});
        }

        //bfs
        xorArr[1] = 0;

        queue<pair<ll,ll>> q;
        q.push({1,0});

        while(!q.empty()){
            ll node = q.front().first;
            ll val = q.front().second;
            q.pop();
                
            xorArr[node] = val;


            for(auto it: arr[node]){
                ll curr_node = it.first;
                ll curr_value = val ^ it.second;

                q.push({curr_node,curr_value});

            }
        }

        map<ll,pair<ll,ll>> mp;

        bool flag = false;
        for(ll i=1;i<=n;i++){
            for(ll j=i+1;j<=n;j++){
                ll val = xorArr[i]^xorArr[j];

                if(mp.find(val)!=mp.end()){
                    cout<<mp[val].first<<' '<<mp[val].second<<' '<<i<<' '<<j<<'\n';
                    flag = true;
                    break;
                }else{
                    mp[val] = {i,j};
                }
            }

            if(flag) break;
        }

        if(!flag)
            cout<<"-1\n";
    }
}