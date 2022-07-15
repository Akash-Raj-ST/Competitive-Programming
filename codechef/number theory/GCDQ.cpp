#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;

        vector<int> a(n+1),pre(n+1),suf(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];

        pre[1] = a[1];

        for(int i=2;i<n;i++){
            pre[i] = __gcd(pre[i-1],a[i]);
        }

        suf[n] = a[n];
        for(int i=n-1;i>=0;i--){
            suf[i] = __gcd(suf[i+1],a[i]);
        }

        int l,r;
        while(q--){
            cin>>l>>r;
            if(r==n) cout<<pre[l-1]<<"\n";
            else cout<<__gcd(pre[l-1],suf.at(r+1))<<"\n";
        }
    }
}