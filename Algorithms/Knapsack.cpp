
#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int knapSack(int W,int wt[],int val[],int n){

    int dp[n+1][W+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0 || j==0) dp[i][j] = 0;

            else{
                if(wt[i-1]>W) dp[i][j] = dp[i-1][j];
                else{
                    int p1 = dp[i-1][j];
                    int p2 = dp[i-1][j-wt[i-1]]+val[i-1];
                    p1>p2?dp[i][j]=p1:dp[i][j]=p2;
                }
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return dp[n][W];
}


int main(){
    int val[] = { 10, 15, 40 };
    int wt[] = { 1, 2, 3 };
    int W = 6;
    int n = sizeof(val) / sizeof(val[0]);
     
    cout << knapSack(W, wt, val, n);
     
    return 0;
}