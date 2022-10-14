#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll n,q;
    cin>>n>>q;

    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    ll num;

    sort(arr.begin(),arr.end());

    start:
    while (q--)
    {
        cin>>num;

        ll low=0,high=n,mid,ans;

        if(num<arr[0]){
            if(n%2==0) cout<<"POSITIVE\n";
            else cout<<"NEGATIVE\n";
            goto start;
        }

        if(num>arr[n-1]){
            cout<<"POSITIVE\n";
            goto start;
        }

        while(low<=high){
            mid = (low+high)/2;
            ans = mid;
            if(arr[mid]==num){
                cout<<0<<"\n";
                goto start;
            }else if(arr[mid]>num){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        if(num>arr[ans]) ans++;

        if((n-ans)%2==0) cout<<"POSITIVE\n";
        else cout<<"NEGATIVE\n";
    }
    
}