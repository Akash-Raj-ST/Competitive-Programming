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

    	vector<int> arr(n*2);

    	for(int i=0;i<n*2;i++){
    		cin>>arr[i];
    	}

    	sort(arr.begin(),arr.end());

    	int median = arr[(n+(n*2))/2];
    	cout<<median<<'\n';

    	for(int i=0;i<n;i++){
    		cout<<arr[i]<<" "<<arr[i+n]<<" ";
    	}
    	cout<<'\n';
    }
}
