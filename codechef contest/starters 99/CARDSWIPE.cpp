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
        int n;
        cin>>n;

        map<int,bool> mp;
        int ans=0, curr=0;

        int id;
        for(int i=0;i<n;i++){
            cin>>id;
            if(mp[id]){
                mp[id] = false;
                curr--;
            }else{
                mp[id] = true;
                curr++;
            }

            if(curr>ans) ans = curr;
        }
        cout<<ans<<'\n';
    }
}