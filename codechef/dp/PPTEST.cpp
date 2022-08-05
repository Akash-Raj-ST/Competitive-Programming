#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,w;
        int dp[101][101];
        int profit[100];
        int time[100];

        int test,que,t;

        cin>>n>>w;

        for(int i=0;i<n;i++){
            cin>>que>>test>>t;
            profit[i] = que*test;
            time[i] = t;
        }

        for(int i=0;i<=w;i++) dp[0][i] = 0;

        int p1,p2;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=w;j++){
                if(time[i-1]>j)
                    dp[i][j] = dp[i-1][j];
                else{
                    p1 = dp[i-1][j];
                    p2 = dp[i-1][j-time[i-1]]+profit[i-1];
                    dp[i][j] = p1>p2?p1:p2;
                }
            }
        }
        cout<<dp[n][w]<<"\n";
    }
}