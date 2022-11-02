#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll m=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll i,n,num;
        cin>>n;

        map<int,int> mp;

        for(i=0;i<n;i++){
            cin>>num;
            mp[num]++;
        }

        ll ans = 0;
        ll val;
        for(auto it:mp){
            val = it.second;
            if(it.first%2==0){
                val += mp[it.first+1];
            }else{
                val += mp[it.first-1];
            }

            if(val>ans) ans=val;
        }
        cout<<n-ans<<"\n";
    }
}