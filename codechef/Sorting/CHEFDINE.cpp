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
    	ll n,k,num;
    	cin>>n>>k;

    	vector<ll> arr;

    	for(ll i=0;i<n;i++){
    		cin>>num;
    		arr.push_back(num);
    	}

    	map<ll,ll> mp;
    	for(ll i=0;i<n;i++){
    		cin>>num;

    		if(mp.find(arr[i])!=mp.end()){
    			if(num<mp[arr[i]]){
    				mp[arr[i]] = num;
    			}
    		}else{
    			mp[arr[i]] = num;
    		}
    	}

    	vector<ll> arr2;
    	for(auto it:mp){
    		arr2.push_back(it.second);
    	}

    	sort(arr2.begin(),arr2.end());

    	ll cat = 0;
    	ll ans = 0;
    	for(auto it:arr2){
    		if(cat==k) break;
    		ans += it;
    		cat++;
    	}

    	if(cat<k) cout<<-1;
    	else cout<<ans;
    	cout<<'\n';
    }
}
