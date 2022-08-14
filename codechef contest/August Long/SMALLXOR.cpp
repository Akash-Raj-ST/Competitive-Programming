#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

#define ll long long int
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;

    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;

        vector<ll> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];
        
        ll small,sm_index;
        ll temp;

        sort(arr.begin(),arr.end());

        map<int,int> mp;
        ll val;
        for(int i=0;i<n;i++){
            val = arr[i]^x;
            mp[arr[i]] = val;
            mp[val] = arr[i];
        }

        bool swap;
        while(y--){
            swap = false;
            arr[0] = mp[arr[0]];

            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){ 
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    swap = true;
                }
                else break;
            }

            if(!swap){
                if(y%2==0){
                    for(ll i=0;i<n;i++) cout<<arr[i]<<" ";
                }else{
                    arr[0] = mp[arr[0]];
                    for(ll i=0;i<n;i++) cout<<arr[i]<<" ";
                }
                break;
            }
        }

        if(swap) for(ll i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<"\n";
    }
}