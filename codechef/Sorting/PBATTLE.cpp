#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
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
    	ll n,i;
    	cin>>n;

    	vector<pair<ll,ll>> arr1,arr2;

    	ll num;
    	for(i=0;i<n;i++){
    		cin>>num;
    		arr1.push_back({num,i});
    	}
    	for(i=0;i<n;i++){
    		cin>>num;
    		arr2.push_back({num,i});
    	}


    	sort(arr1.begin(),arr1.end());
    	sort(arr2.begin(),arr2.end());

    	vector<ll> arr;

    	set<ll> a_left,b_left;
    	map<ll,set<ll>> mp;

    	for(int i=0;i<n;i++){
    		mp[arr1[i].second].insert(a_left.begin(),a_left.end());
    		mp[arr2[i].second].insert(b_left.begin(),b_left.end());
    		
    		a_left.insert(arr1[i].first);
    		b_left.insert(arr2[i].first);

    	}


    	for(auto it:mp){
    		arr.push_back(it.second.size());
    	}

    	sort(arr.begin(),arr.end(),greater<>());

    	ll count=1;
    	for(i=1;i<n;i++){
    		if(arr[i]==arr[i-1]) count++;
    		else break;
    	}

    	cout<<count<<'\n';
    }
}
