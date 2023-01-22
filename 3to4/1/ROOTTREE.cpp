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

    int t;
    cin>>t;

    while(t--){
    	int n;
    	cin>>n;

    	map<int,int> mp;
    	int a,b;
    	
    	for(int i=0;i<n-1;i++){
    		cin>>a>>b;
    		a--;
    		b--;

    		mp[b]++;
    	}

    	int sum = 0;
    	for(auto it:mp){
    		sum += it.second-1;
    	}
    	cout<<sum<<'\n';
    }
}
