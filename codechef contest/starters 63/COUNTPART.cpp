#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll m=998244353;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll i,n;
        cin>>n;

        vector<ll> arr(n);
        vector<ll> dp(n);

        for(i=0;i<n;i++) cin>>arr[i];

        dp[0] = 1;

        for(i=1;i<n;i++){
            if(arr[i]>arr[i-1]) dp[i] = dp[i-1]+1;
            else dp[i] = 1;
        }


        ll sum = 0;

        for(i=0;i<n;i++){
            sum = (sum+dp[i])%m;
        }

        cout<<sum+1<<"\n";
    }
}