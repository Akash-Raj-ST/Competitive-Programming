#include <iostream>
#include <vector>
using namespace std;

int max_value(int a,int b){
    if(a>b) return a;
    return b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<vector<int>> dp(49,vector<int>(49,0));
        int start,end,cost;

        for(int i=0;i<n;i++){
            cin>>start>>end>>cost;

            if(dp[start][end]<cost) dp[start][end]=cost;
        }

        vector<int> max(49,0);

        for(int i=0;i<49;i++){
            for(int j=0;j<i;j++){
                max[i] = max_value(max[i],max[j]+dp[j][i]);
            }
        }

        cout<<max[48]<<"\n";
        
    }
}