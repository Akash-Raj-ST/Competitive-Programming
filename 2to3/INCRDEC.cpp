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

    int t;
    cin>>t;
    lp:
    while(t--){
    	int n;
    	cin>>n;

    	map<int,int> mp;
    	int num;
    	for(int i=0;i<n;i++){
    		cin>>num;
    		mp[num]++;
    	}

    	//check for duplicates more than 2
    	//max should not exceed 1

    	int mx = -1;
    	for(auto it:mp){
    		if(it.second>2){
    			cout<<"NO"<<'\n';
    			goto lp;
    		}
    		if(it.first>mx) mx=it.first;
    	}

    	if(mp[mx]>1){
    		cout<<"NO"<<'\n';
    		continue;
    	}

    	cout<<"YES\n";
    	vector<int> ans(n);
    	int s=0,e=n-1;
    	for(auto it:mp){
    		if(it.second>1){
    			ans[s++] = it.first;
    			ans[e--] = it.first;
    		}else{
    			ans[s++] = it.first;
    		}
    	}

    	for(int i=0;i<n;i++){
    		cout<<ans[i]<<' ';
    	}
    	cout<<'\n';
    }
}
