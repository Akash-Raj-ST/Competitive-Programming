#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;

    while(t--){
        ll n,q,i;
        cin>>n>>q;

        vector<ll> arr(n);
        vector<ll> sum(n);
        vector<ll> max(n);


        for(i=0;i<n;i++) cin>>arr[i];

        sum[0] = arr[0];
        for(i=1;i<n;i++) sum[i] = arr[i]+sum[i-1];

        max[0] = arr[0];
        for(i=1;i<n;i++) max[i] = max[i-1]>arr[i]?max[i-1]:arr[i];

        ll num;
        ll high,low,mid;
        while(q--){
            cin>>num;

            high = n-1;
            low=0;

            while(low<=high){
                mid = (high+low)/2;
                if(max[mid]<=num){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }

            if(high<0) cout<<0<<" ";
            else cout<<sum[high]<<" ";
        }
        cout<<"\n";
    } 
}