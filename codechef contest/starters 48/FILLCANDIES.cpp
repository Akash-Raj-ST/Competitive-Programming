#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,k,m;
        cin>>n>>m>>k;

        if(n%(m*k)==0) cout<<n/(m*k)<<"\n";
        else cout<<n/(m*k)+1<<"\n";
    }
}