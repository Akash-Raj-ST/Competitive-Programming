// https://www.codechef.com/submit/MVALUE

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

        cin>>n;

        vector<ll> arr(n);

        for(i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end(),greater<>());

        ll first = arr[0],second;

        for(i=1;i<n;i++){
            if(arr[i]!=first || i==n-1){
                second = arr[i];
                break;
            }
        }
         cout<<(first*second)+(first-second)<<"\n";
    }
}