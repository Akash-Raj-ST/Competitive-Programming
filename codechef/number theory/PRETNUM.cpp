#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

const int N=1e6+10;

vector<bool> is_prime(N,true);

void init(){
    is_prime[0]=is_prime[1] = false;

    for(int i=2;i*i<=N;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=N;j+=i){
                is_prime[j]=false;
            }
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    init();

    ll t;
    cin>>t;

    while(t--){
        ll l,r;
        cin>>l>>r;

        ll n=r-l+1;
        ll rem;

        vector<ll> arr(N,0);
        ll sq;

        for(ll i=1;i*i<=r;i++){
            sq = i*i;
            for(ll j=((l-1)/i+1)*i;j<=r;j+=i){
                if(j<sq) continue;
                if(sq==j) arr[j-l]++;
                else arr[j-l]+=2;
            }            
        }

        ll count = 0;
        for(ll i=l;i<=r;i++){
            if(is_prime[arr[i-l]])   count++;
        }
        cout<<count<<"\n";
    }
}