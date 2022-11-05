// https://www.codechef.com/submit/RECTCNT?tab=statement

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

    while(true){
        ll n,i;
        cin>>n;
        if(n==0) break;

        vector<pair<ll,ll>> arr;
        ll x,y;
        for(i=0;i<n;i++){
            cin>>x>>y;
            arr.push_back({x,y});
        }

        sort(arr.begin(),arr.end());
        
        map<pair<ll,ll>,ll> mp;
        for(i=0;i<n-1;i++){
            if(arr[i].first==arr[i+1].first){
                mp[{arr[i].second,arr[i+1].second}]++;
                i++;
            }
        }

        ll sum = 0;

        for(auto it:mp){
            sum += ((it.second)*(it.second-1))/2;
        }

        cout<<sum<<'\n';

    }
}