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

    ll optimal;

    ll _sum = arr[0]+arr[1];
    ll _avg = _sum/2;

    optimal = _avg;

    arr[0] = _avg + (_sum%2);
    arr[1] = _avg;


    for(i=2;i<n;i++){
        _sum = arr[i]+arr[i-1];
        _avg = _sum/2;

        if(_avg+(_sum%2)>optimal){
            optimal = _avg + (_sum%2);
            arr[i-1] = _avg + (_sum%2);
            arr[i] = _avg;
        }else{
            ll diff = optimal - (_avg+(_sum%2));
            arr[i-1] = (_avg+(_sum%2))+diff;
            arr[i] = _avg-diff;
        }
    }

    cout<<optimal;
}