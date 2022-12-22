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

    int t;
    cin>>t;

    while(t--){
    	ll n,i;
    	cin>>n;

    	map<int,int> mp;
    	vector<int> arr;
    	int num;
    	for(i=0;i<n;i++){
    		cin>>num;
    		mp[num]++;
    		arr.push_back(num);
    	}

    	int count=1;
    	map<int,pair<int,int>> mp2;
    	bool flag = false;
    	for(auto it:mp){
    		//cout<<it.first<<' '<<it.second<<'\n';
    		if(it.second%it.first!=0){
    			flag=true;
    			break;
    		}
    		mp2[it.first] = {it.first,-1};
    	}

    	map<int,int> mp3;
    	if(flag){
    		cout<<-1<<'\n';
    	}else{
    		for(int i=0;i<n;i++){
    			if(mp2[arr[i]].second==-1){
    				mp2[arr[i]].second = 0;
    				mp3[arr[i]] = count++;
    			}

    			if(mp2[arr[i]].first != mp2[arr[i]].second){
    				mp2[arr[i]].second++;
    				cout<<mp3[arr[i]]<<' ';
    			}

    			if(mp2[arr[i]].first == mp2[arr[i]].second){
    				mp2[arr[i]].second = -1;
    				//mp3[arr[i]] = count++;
    			}
    			//cout<<"mp3: "<<mp3[arr[i]]<<'\n';
    		}
    		cout<<'\n';
    	}

    }
}
