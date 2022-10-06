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
        int n,k;
        cin>>n>>k;

        vector<int> arr(n),dp(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        dp[0] = arr[0];

        int index;
        for(int i=1;i<n;i++){
            index = i-k;
            if(index>=0 && index<n){
                
                if(dp[index]>0)
                    dp[i] = dp[index]+arr[i];
                else
                    dp[i] = arr[i];
                
            }else{
                dp[i] = arr[i];
            }
            
        }

        int max = dp[n-k];
        
        for(int i=n-k+1;i<n;i++){
            if(dp[i]>max) max = dp[i];
        }

        cout<<max<<"\n";
        
    }
}