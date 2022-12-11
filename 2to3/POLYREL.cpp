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

    while(t--){
    	int n;
    	cin>>n;

    	int temp;
    	for(int i=0;i<n;i++){
    		cin>>temp>>temp;
    	}

    	int ans = n;
    	while(true){
    		int rem = n/2;
    		n /=2 ;

    		if(rem>2) ans+=rem;
    		else break;
    	}
    	cout<<ans<<'\n';
    }
}
	