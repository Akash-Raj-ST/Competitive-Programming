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
        ll n,m;
        cin>>n>>m;

        ll sum = (n*(n+1))/2;
        ll sum2 = 0;
        ll ele;

        for(ll i=0;i<m;i++){
            cin>>ele;
            sum2 += ele;
        }

        ll ans = sum - sum2;
        cout<<ans<<'\n'; 
    }
}