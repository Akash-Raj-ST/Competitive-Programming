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
    	ll n,a,b,c,d;
    	cin>>n>>a>>b>>c>>d;

    	vector<ll> arr(1000000,0);

    	ll prev = d;
      arr[prev]++;
    	for(ll i=1;i<n;i++){
    		prev = ((a*prev*prev)+(b*prev)+c)%1000000;
        arr[prev]++;
    	}


    	ll c1=0,c2=0;

      ll cnt=0;
    	for(ll i=0;i<1000000;i++){
        if(arr[i]%2==1 && arr[i]>0){
      		if(cnt%2==0){
      			c1+=i;
      		}else{
      			c2+=i;
      		}
          cnt++;
        }
    	}

    	cout<<abs(c1-c2)<<'\n';
    }
}
