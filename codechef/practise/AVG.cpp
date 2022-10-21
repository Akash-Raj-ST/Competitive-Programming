//https://www.codechef.com/submit/AVG

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
        ll n,k,v;
        cin>>n>>k>>v;

        ll num,sum=0;

        for(ll i=0;i<n;i++){
            cin>>num;
            sum += num;
        }

        ll val = v*(n+k);
        ll diff = val -sum;

        if(val<sum || val%k!=0){
            cout<<-1<<"\n";
            continue;
        }

        cout<<val/k<<"\n";
    }
}