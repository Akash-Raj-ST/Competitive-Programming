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

    ll n,i;
    cin>>n;
    
    vector<ll> arr;

    ll ele;

    for(i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }


    ll _sum=0,_avg,ans=0;


    for(i=1;i<=n;i++){
        _sum = _sum+arr[i-1];
        _avg = _sum/i;

        if(_sum%i!=0) _avg+=1; 

        ans = max(ans,_avg);
    }

    cout<<ans;
}