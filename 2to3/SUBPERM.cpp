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
    	int n,k;
    	cin>>n>>k;

    	if((n>1 && k==1) || (k>n)){
    		cout<<-1<<'\n';
    		continue;
    	}

    	if(k==1 && n==1){
    		cout<<1<<'\n';
    		continue;
    	}

    	int placed = 1;

    	for(int i=1;i<n;i++){
    		cout<<i<<' ';
    		placed++;

    		if(placed==k){
    			cout<<n<<' ';
    		}
    	}
    	cout<<'\n';
    }
}
