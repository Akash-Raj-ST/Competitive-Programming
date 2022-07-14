#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        if(__gcd(n,m)>1) cout<<0<<"\n";
        else if(__gcd(n+1,m)>1 && __gcd(n,m+1)>1) cout<<1<<"\n";
        else cout<<2<<"\n";

    }
}