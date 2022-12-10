#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll M=1e9+7;


int main(){
     #ifndef ONLINE_JUDGE
       freopen("../input.txt","r",stdin); 
       freopen("../output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;

    while(t--){
    	ll n;
    	cin>>n;

    	map<pair<ll,ll>,ll> mp;

    	vector<ll> a(n),b(n);
    	for(ll i=0;i<n;i++){
    		cin>>a[i];
    	}
    	for(ll i=0;i<n;i++){
    		cin>>b[i];
    	}

    	for(ll i=0;i<n;i++){
    		mp[{a[i],b[i]}]++;
    	}

    	ll count = 0;
    	for(auto it:mp){
    		if(it.first.first == it.first.second){
    			count += 2*((it.second*(it.second-1))/2);
    		}else{
    			count += it.second*(mp[{it.first.second,it.first.first}]);
    		}
    	}

    	cout<<count/2<<'\n';
    }
}
