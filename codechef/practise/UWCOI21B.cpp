#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll n,m;
    cin>>n>>m;

    vector<ll> a(n+1),b(m+1);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    ll a_min=a[0];

    for(int i=1;i<n;i++){
        if(a[i]<a_min) a_min = a[i];
    }

    ll b_min_count = 0;

    for(int i=0;i<m;i++){
        if(b[i]<a_min) b_min_count++;
    }

    ll swaps = b_min_count*n;

    cout<<swaps<<"\n";
}