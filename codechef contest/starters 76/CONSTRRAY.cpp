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
        ll n;
        cin>>n;
        
        if(n%2==1){
            cout<<"-1\n";
            continue;
        }

        for(ll i=1;i<=n/2;i++){
            if(i%2==1) cout<<i<<' ';
            else cout<<i*-1<<' ';
        }

        for(ll i=n/2;i>=1;i--){
            if(i%2==0) cout<<i<<' ';
            else cout<<i*-1<<' ';
        }
        cout<<'\n';
    }
}