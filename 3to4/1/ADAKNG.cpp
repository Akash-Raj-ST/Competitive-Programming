#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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
    	int x,y,move;
    	cin>>x>>y>>move;

    	int len1 = min(y-1,move)+min(8-y,move)+1;
    	int len2 = min(x-1,move)+min(8-x,move)+1;

    	cout<<len1*len2<<'\n';
    }
}
