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
    	int n,num;
    	cin>>n;

    	map<int,int> mp;

    	for(int i=0;i<n;i++){
    		cin>>num;
    		mp[num]++;
    	}

    	int mx = -1;
    	int count=0;
    	for(auto it:mp){
    		mx = max(mx,it.second);
    		count++;
    	}

  		if(n==1 || count==1){
  			cout<<0<<'\n';
  			continue;
  		}

    	if(mx<2){
    		cout<<-1<<'\n';
    		continue;
    	}

    	cout<<(n-mx)+1<<'\n';
    }
}
