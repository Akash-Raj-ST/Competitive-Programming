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
        ll n;
        cin>>n;

        vector<ll> arr(n);

        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }

        map<ll,ll> mp;

        for(ll i=0;i<n;i++){
            mp[arr[i]]++;

        }

        ll sum = 0,count=0,prev=1;
        for(auto it:mp){
            if(it.first==count+1){
                sum = (sum + (prev*it.second))%mod;
                prev = prev*it.second;
            }else{
                break;
            }
            count++;
        }

       
        
        cout<<sum<<'\n';
    }
}