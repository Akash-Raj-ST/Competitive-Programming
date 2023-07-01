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

        for(ll i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end(),greater<ll>());

        ll xor_value = arr[0];
        ll boxes = 1;


        for(ll i=1;i<n;i++){
            if(xor_value>=arr[i]){
                xor_value = xor_value ^ arr[i];
            }else{
                boxes++;
                xor_value = arr[i];
            }
        }
        cout<<boxes<<'\n';
    }
}