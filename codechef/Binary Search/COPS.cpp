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
    	int n,x,y,num;
    	cin>>n>>x>>y;

    	int speed = x*y;

    	vector<int> arr;

    	for(int i=0;i<n;i++){
    		cin>>num;
    		arr.push_back(num);
    	}

    	sort(arr.begin(),arr.end());

    	int low=0,ans=0;

    	for(int i=0;i<n;i++){
    		int l = max(1,arr[i]-speed);
    		int r = min(100,arr[i]+speed);
    		if(l>low)
    			ans += l-low-1;

    		low = r;
    	}

    	if(arr[n-1]+speed<100) ans += 100-(arr[n-1]+speed);

    	cout<<ans<<'\n';
    }
}
