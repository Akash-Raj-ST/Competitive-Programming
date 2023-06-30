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
    
    vector<string> arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }

    map<string,bool> mp;
    string ans;

    for(int i=t-1;i>=0;i--){
        if(mp[arr[i]]) continue;
        mp[arr[i]] = true;

        ans += arr[i].substr(arr[i].length()-2,2);
    }

    cout<<ans;
}