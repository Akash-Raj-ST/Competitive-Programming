#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int n,k,p;
    cin>>n>>k>>p;

    vector<int> arr(n);

    for(int i=0;i<n;i++) cin>>arr[i];

    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j] = abs(arr[i]-arr[j]);
        }
    }

    for(int k=0;k<n;k++){
        for(int j=0;j<n;j++){
            for(int i=0;j<n;j++){
                if(dp[i][k]+dp[k][j]<dp[i][j]){
                    dp[i][j] = dp[i][k]+dp[k][j]; 
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
}