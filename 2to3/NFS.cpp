#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll M=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int u,v,a,s;
        cin>>u>>v>>a>>s;

        int f = (u*u)-(2*a*s);

        if(f<=v*v) cout<<"yes";
        else cout<<"no";
        cout<<'\n';
    }
}