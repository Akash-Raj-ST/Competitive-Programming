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

    	string s;
    	cin>>s;

    	int start=0,end=n-1,len=0;

    	for(int i=0,j=n-1;i<=j;i++,j--){
    		while(s[i]!='(' && i<=j){
    			i++;
    			len++;
    		}
    		while(s[j]!=')' && i<=j){
    			j--;
    			len++;
    		}
    		//cout<<i<<" "<<j<<'\n';
    	}
    	cout<<len<<'\n';
    }
}
