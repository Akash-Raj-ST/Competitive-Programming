// https://www.codechef.com/submit/CIREQ

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll m=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,i;
        cin>>n>>i;

        vector<ll> arr(n);

        for(i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end());

        ll curr_index=1,extra=1;
        ll count=1;

        for(i=0;i<n;i++){
            if(arr[i]>=curr_index){
                curr_index++;
            }
        }
    }
}