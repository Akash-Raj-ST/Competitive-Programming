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
        int n,num;
        cin>>n;

        map<int,int> mp;

        for(int i=0;i<n*2;i++){
            cin>>num;
            mp[num]++;
        }

        int ans = -1;

        for(auto it:mp){
            if(it.second>ans) ans = it.second;
        }

        cout<<ans<<'\n';
    }
}