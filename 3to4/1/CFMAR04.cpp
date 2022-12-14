#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;


const ll M=1e9+7;

string sort_string(string s){
	int arr[27];
    
    for(int i=0;i<27;i++){
        arr[i] = 0;
    }
    
	for(int i=0;i<s.length();i++){
		arr[s[i]-'a']++;
	}

	string ans;

	for(int i=0;i<26;i++){
		for(int j=0;j<arr[i];j++){
			ans += (char)(i+'a');
		}
	}
	return ans;
}

int main(){
     #ifndef ONLINE_JUDGE
       freopen("../input.txt","r",stdin); 
       freopen("../output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    
    	int n;
    	cin>>n;

    	map<string,int> mp;

    	string s;
    	for(int i=0;i<n;i++){
    		cin>>s;
    		s = sort_string(s);
    		mp[s]++;
    	}

    	int max = 0;

    	for(auto it:mp){
    		if(it.second>max) max = it.second;
    	}
    	cout<<max<<'\n';
    
}
