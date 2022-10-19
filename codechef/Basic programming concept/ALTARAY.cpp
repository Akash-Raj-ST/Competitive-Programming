// https://www.codechef.com/submit/ALTARAY

#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,i;
        cin>>n;

        vector<ll> arr(n),dp(n+1);

        for(i=0;i<n;i++) cin>>arr[i];

        dp[n-1] = 1;

        for(i=n-2;i>=0;i--){
            if(arr[i+1]>0){
                if(arr[i]>0) dp[i]=1;
                else dp[i] = dp[i+1]+1;
            }else{
                if(arr[i]<0) dp[i]=1;
                else dp[i] = dp[i+1]+1;
            }
        }

        for(i=0;i<n;i++) cout<<dp[i]<<" ";
        cout<<"\n";
    }
}