#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

ll get_ones(ll k){
    ll count = 0;
    while(k){
        if(k&1==1) count++;
        k >>=1;
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        ll ones = get_ones(k);

        if(ones==0) cout<<n;
        else{
            cout<<n/(2*ones);
        }
        cout<<"\n";
    }
}