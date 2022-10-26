// https://www.codechef.com/submit/TWINGFT

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,k,i;
        cin>>n>>k;

        vector<ll> arr(n);

        for(i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end(),greater<>());
        
        ll sum1=0,sum2=0;

        for(i=0;i<k*2;i+=2){
            sum1 += arr[i];
        }

        for(i=1;i<k*2;i+=2){
            sum2 += arr[i];
        }
        sum2 += arr[k*2];

        ll ans = sum1>sum2?sum1:sum2;

        cout<<ans<<"\n";
    }
}