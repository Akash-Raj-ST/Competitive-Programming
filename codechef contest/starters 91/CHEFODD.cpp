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

        if(n/m<2){
            cout<<"NO\n";
            continue;
        }

        ll odds = (n/2)+(n%2);
        ll rem_odds = odds-m;

        if(rem_odds%2==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}