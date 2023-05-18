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

        vector<ll> arr(n);

        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }

        bool found = false;

        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                for(ll k=j+1;k<n;k++){
                    if(arr[j]-arr[i]==arr[k]-arr[j]){
                        found = true;
                        cout<<"No\n";
                    }
                }
            }
        }

        if(!found){
            cout<<"Yes\n";
        }
    }
}