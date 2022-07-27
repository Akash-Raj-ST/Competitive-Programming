#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t=1;

    while(t--){
        int n,w;
        cin>>n>>w;

        int *arr = new int(n);
        int *dp = new int(n);

        dp[0] = 1;

        for(int i=0;i<n;i++) cin>>arr[i];

        for(int i=1;i<n;i++){
            if(arr[i-1]+1==arr[i]) dp[i] = dp[i-1]+1;
            else dp[i] = 1;
        }

        if(w==1){
            cout<<n<<"\n";
            continue;
        }

        int total = 0;

        for(int i=1;i<n;i++){
            if(i==n-1 && dp[i]>=w){
                total += dp[i]-(w-1);
            }else if(dp[i]>dp[i+1] && dp[i]>=w){
                total += dp[i]-(n-1);
            }
        }
        cout<<total<<"\n";
    }
}