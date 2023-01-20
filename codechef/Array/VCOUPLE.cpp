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
       freopen("../input.txt","r",stdin); 
       freopen("../output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
    	int n;
    	vector<int> a(n),b(n);

    	for(int i=0;i<n;i++) cin>>a[i];
    	for(int i=0;i<n;i++) cin>>b[i];

    	sort(a.begin(),a.end());
    	sort(b.begin(),b.end());

    	int ans = 0,val,e=n;
    	for(int i=0;i<n;i++){
    		e--;
    		val = a[i]+b[e];

    		if(val>ans) ans=max; 
    	}
    	cout<<ans<<'\n';
    }
}
