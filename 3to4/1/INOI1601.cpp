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
       freopen("../input.txt","r",stdin); 
       freopen("../output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
    	int root;
    	vector<vector<int>> wealth;
    	vector<vector<int>> arr;

    	int n,manager,we;
    	cin>>n;

    	for(int i=0;i<n;i++){
    		cin>>we;
    		wealth.push_back(we);
    	}

    	for(int i=0;i<n;i++){
    		cin>>manager;
    		if(manager==-1){
    			root = i;
    		}else{
    			arr[manager].push_back(i);
    		}
    	}

    	
    }
}
