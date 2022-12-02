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
        ll n,num;
        cin>>n;

        map<ll,ll> mp;

        for(ll i=0;i<n;i++){
            cin>>num;
            mp[num] ++;
        }

        ll l1=0,l2=0;

        for(auto it:mp){
            if(it.second>l1){
                l2 = l1;
                l1 = it.second;
            }else if(it.second>l2){
                l2 = it.second;
            }
        }

        l1 = l1/2+(l1%2);

        if(l1>l2) cout<<l1;
        else cout<<l2;
        cout<<'\n';
    }
}