#include <iostream>
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
        if(n>=m) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}