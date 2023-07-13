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
        int n,m,num;
        cin>>n>>m;

        int sum=0;
        for(int i=0;i<m;i++){
            cin>>num;
            sum += num;
        }

        int q = (sum/n);
        int r = (sum%n);
        int ans = 0;
        if(q==m) ans = n;
        else{
            if(q==m-1) ans=r;
        }
        cout<<ans<<'\n';
    }
}