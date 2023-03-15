#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

const ll M=1e9+7;
const ll mod = 1000000007;

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
        ll n,m,k;
        cin>>n>>m>>k;

        vector<vector<ll>> arr(n+1,vector<ll>(m+1));

        ll count = 1;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                arr[i][j] = count++;
            }
        }

        while(k--){
            ll q,x,v;
            cin>>q>>x>>v;

            if(q==0){
                for(ll i=0;i<m;i++) 
                    arr[x-1][i] = (arr[x-1][i]*v)%mod;
            }else{
                for(ll i=0;i<n;i++) 
                    arr[i][x-1] = (arr[i][x-1]*v)%mod;
            }

            if(k==0){
                ll sum = 0;
                for(ll i=0;i<n;i++){
                    for(ll j=0;j<m;j++){
                        sum = (sum+arr[i][j])%mod;
                    }
                }
                cout<<sum<<'\n';
            }
        }
    }
}