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
        ll n,x;
        cin>>n>>x;

        vector<ll> arr(n);

        ll odd=0,even=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];

            if(arr[i]%2==0) even++;
            else odd++;
        }

        if(x%2==0){
            if(odd==0){
                cout<<"-1\n";
                continue;
            }

            cout<<even<<'\n';
        }else{
            cout<<(even/2)+(even%2)<<'\n';
        }
    }
}