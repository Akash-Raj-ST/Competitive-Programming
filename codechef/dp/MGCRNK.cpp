#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n][n],dp[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }

        dp[0][0] = 0;

        for(int i=1;i<n;i++) dp[0][i] = dp[0][i-1]+arr[0][i];
        for(int i=1;i<n;i++) dp[i][0] = dp[i-1][0]+arr[i][0];

        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                dp[i][j] = max(arr[i][j]+dp[i][j-1],arr[i][j]+dp[i-1][j]);
            }
        }
    
        if(dp[n-1][n-1]>=0) cout<<fixed<<setprecision(6)<<(double)dp[n-1][n-1]/(n*2-3);
        else cout<<"Bad Judges";
        cout<<"\n";
    }
}