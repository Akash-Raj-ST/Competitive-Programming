#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

const ll m=1e9+7;

ll max_value(ll a,ll b,ll c){
    if(a>b){
        if(a>c){
            return a;
        }
        return c;
    }else{
        if(b>c) return b;
        return c;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,m,i,j,val1,val2;
        cin>>n>>m;

        vector<vector<int>> arr(n,vector<int>(m,0));
        vector<vector<int>> dp(n,vector<int>(m,0));

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        for(i=n-1;i>=0;i--){
            for(j=m-1;j>=0;j--){
                if(i==n-1 && j==m-1) dp[i][j] = arr[i][j];
                else if(i==n-1) dp[i][j] = max(arr[i][j],dp[i][j+1]);
                else if(j==m-1) dp[i][j] = max(arr[i][j],dp[i+1][j]);

                else{
                    if((i+j)%2==0){
                        dp[i][j] = max(arr[i][j],min(dp[i+1][j],dp[i][j+1]));
                    }else{
                        if(arr[i+1][j]>arr[i][j+1]){
                            dp[i][j] = max(arr[i][j],dp[i+1][j]);
                        }else{
                            dp[i][j] = max(arr[i][j],dp[i][j+1]);
                        }
                    }
                }
                
            }
        }
        
        cout<<dp[0][0]<<"\n";

    }
}