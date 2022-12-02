#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll M=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,k,num;
        cin>>n>>k;

        map<int,bool> mp;

        for(int i=0;i<n;i++){
            cin>>num;
            mp[num] = true;
        }

        int added = 0;
        int ans = -1;

        for(int i=0;i<n+k;i++){ 
            if(!mp[i]){
                if(added==k){
                    ans = i;
                    break;
                }
                added++;
            }
        }
        if(ans==-1) cout<<n+k<<'\n';
        else cout<<ans<<'\n';
    }
}