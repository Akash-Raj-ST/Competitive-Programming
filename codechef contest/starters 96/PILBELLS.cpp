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
        int n,x,k,p;
        cin>>n>>x>>k>>p;

        int ans = p;
        //10
        for(int i=0;i<k;i++){
            if(i<x && i<k){
                ans += 10;
            }else{
                ans += 5;
            }
        }

        if(n==k) ans += 20;

        cout<<ans<<'\n';
    }
}