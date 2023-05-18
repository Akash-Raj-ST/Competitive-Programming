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
        ll n;
        cin>>n;

        string s;
        cin>>s;

        map<ll,ll> mp;

        for(ll i=0;i<n;i++){
            mp[s[i]]++;
        }

        ll chars=0,even=0,odd=0;

        for(auto it:mp){
            chars++;
            if(it.second%2==0) even++;
            else odd++;
        }

        if(odd>1){
            cout<<0<<'\n';
            continue;
        }

        if(odd==1){
            if(chars>1){
                cout<<1<<'\n';
            }else{
                if(n%2==0) cout<<0<<'\n';
                else cout<<2<<'\n';
            }
            continue;
        }else{   
           cout<<1<<'\n'; 
        }
    }
}