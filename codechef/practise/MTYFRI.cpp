#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
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

    int t;
    cin>>t;

    while(t--){
    	int n,k,num;
    	cin>>n>>k;

    	vector<int> arr1,arr2;

    	for(int i=0;i<n;i++){
    		cin>>num;
    		if(i%2==0) arr1.push_back(num);
    		else arr2.push_back(num);
    	}

    	sort(arr1.begin(),arr1.end(),greater<>());
    	sort(arr2.begin(),arr2.end());

    	int temp;
    	int sum1=0,sum2=0;
    
    	for(int i=0;i<k && i<n/2;i++){
    		if(arr1[i]>arr2[i]){
	    		temp = arr1[i];
	    		arr1[i] = arr2[i];
	    		arr2[i] = temp;
    		}else{
    			break;
    		}
    	}

    	for(auto it:arr1){
    		sum1 += it;
    	}

    	for(auto it:arr2){
    		sum2 += it;
    	}

    	if(sum2>sum1)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    	
    }
}
	