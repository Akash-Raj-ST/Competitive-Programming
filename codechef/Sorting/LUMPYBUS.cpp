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
        ll n,p,q,i;
        cin>>n>>p>>q;

        vector<ll> arr(n);

        for(i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end());

        ll ones,twos,ans=0;
        ll total = p+(q*2);
        for(int i=0;i<n;i++){
            if(arr[i]>total){
                break;
            }

            if(arr[i]%2==1){
                if(p==0) continue;
                else p--;
            }

            total -= arr[i];
            ans++;
        }
        cout<<ans<<"\n";
    }
}