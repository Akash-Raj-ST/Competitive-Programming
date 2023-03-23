#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

const ll M=1e9+7;

ll calc(ll v){
    if(v%2==0){
        return v*(v/2);
    }

    ll value = v/2;

    ll count = value*v;
    count  += value+1;

    return count;
}

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

        vector<vector<ll>> arr(n+1,vector<ll>(n+1,0));

        ll count1=1,count2 = calc(n)+1;

        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j+=2){
                    arr[i][j] = count1++;
            }
        }

        for(ll i=1;i<=n;i++){
            for(ll j=2;j<=n;j+=2){
                    arr[i][j] = count1++;
            }
        }

        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                cout<<arr[i][j]<<' ';
            }
            cout<<'\n';
        }
    }
}