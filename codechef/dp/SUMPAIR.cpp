#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;

    while(t--){
        ll n,d;
        cin>>n>>d;

        vector<ll> arr(n);

        for(ll i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end());

        ll ans = 0;
        for(ll i=n-1;i>0;){
            if(arr[i]-arr[i-1]<d){
                ans += arr[i]+arr[i-1];
                i-=2;
            }else{
                i--;
            }
        }
        cout<<ans<<"\n";
    }
}