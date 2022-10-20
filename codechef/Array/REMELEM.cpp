// https://www.codechef.com/submit/REMELEM

#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,k,i;
        cin>>n>>k;

        vector<ll> arr(n);

        for(i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end());

        ll start = 0;
        ll end = n-1;

        bool flag = true;
        while(end-start>=1){
            if(arr[start]+arr[end]<=k) end--;
            else{
                flag = false;
                break;
            }
        }

        if(flag) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}