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

    	vector<int> arr(n);

    	for(int i=0;i<n;i++) cin>>arr[i];

    	sort(arr.begin(),arr.end());

    	int count=0,pos=0;

    	for(int i=0;i<n;i++){
    		if(pos+arr[i]<n){
    			pos += arr[i];
    			count++;
    		}else{
    			break;
    		}
    	}
    	cout<<count<<'\n';
    }
}
	