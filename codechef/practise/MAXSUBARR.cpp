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
        
        ll n,m;

        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];

        cin>>m;
        vector<ll> b(m);
        for(ll i=0;i<m;i++) cin>>b[i];

        ll max_right_sum=0, right_sum=0;

        for(ll i=0;i<n;i++){

            right_sum += a[i];
            if(right_sum>max_right_sum){
                max_right_sum = right_sum;
            }

            if(right_sum<0) right_sum = 0;

        }

        ll second_sum = 0;

        for(ll i=0;i<m;i++){
            if(b[i]>0) second_sum += b[i];
        }

        ll ans = max_right_sum+second_sum;

        cout<<ans<<"\n";
    }
}