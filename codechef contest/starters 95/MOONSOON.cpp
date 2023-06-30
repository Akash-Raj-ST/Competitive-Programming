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
        ll n,m,h;
        cin>>n>>m>>h;

        vector<ll> cars(n);
        vector<ll> stations(m);

        for(ll i=0;i<n;i++) cin>>cars[i];
        for(ll i=0;i<m;i++) cin>>stations[i];

        sort(cars.begin(),cars.end(),greater<ll>());
        sort(stations.begin(),stations.end(),greater<ll>());

        ll ans = 0;

        for(ll i=0;i<min(n,m);i++){
            if(stations[i]*h<=cars[i]) ans+=stations[i]*h;
            else ans += cars[i];
        }
        cout<<ans<<'\n';
    }
}