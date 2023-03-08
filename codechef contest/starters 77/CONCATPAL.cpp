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

    ll t;
    cin>>t;

    while(t--){
        ll n,m;
        cin>>n>>m;

        string a,b;
        cin>>a>>b;
        
        if(n<m){
            swap(n,m);
            swap(a,b);
        }

        map<char,ll> mp;

        for(ll i=0;i<n;i++){
            mp[a[i]]++;
        }

        bool flag = false;
        for(ll i=0;i<m;i++){
            if(mp[b[i]]==0){
                cout<<"NO\n";
                flag = true;
                break;
            }
            mp[b[i]]--;
        }

        if(flag) continue;

        ll odd = 0;

        for(auto it: mp){
            if(it.second>0 && it.second%2==1){
                odd++;
            }

        }
        if(odd>1)
                cout<<"NO\n";
        else 
            cout<<"YES\n";
    }
}