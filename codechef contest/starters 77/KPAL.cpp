#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

const ll M=1e9+7;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        bool flag=true;
        for(int i=0;i<n/2;i++){
            if(arr[i]!=arr[n-1-i]){
                flag = false;
                break;
            }
        }

        if(flag){
            cout<<"YES\n";
            continue;
        }

        if(n==k){
            cout<<"NO\n";
            continue;
        }

        if(n%2==1){
            cout<<"YES\n";
            continue;
        }

        if(k%2==1){
            if(k<n){
                cout<<"YES\n";
                continue;
            }else{
                cout<<"No\n";
                continue;
            }
        }else{
            int diff = 0;

            for(int i=0;i<n/2;i++){
                diff += abs(arr[i]-arr[n-1-i]);
            }

            if(diff%2==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}