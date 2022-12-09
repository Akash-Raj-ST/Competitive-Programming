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

    	int added = 0;
    	int sticks = 0;
    	for(auto it:mp){
    		added += it.second%2;
    		sticks += it.second;
    	}

    	cout<<added+(added+sticks)%4<<'\n';
    }
}
