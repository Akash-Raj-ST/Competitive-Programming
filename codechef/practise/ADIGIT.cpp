#include <iostream>
#include <vector>
#include <map>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    string s;
    ll n,m,x;
    cin>>n>>m>>s;

    
    while(m--){
        cin>>x;
        
        x--;
        ll sum = 0;
        for(ll i=0;i<x;i++){
            sum += abs((s[x]-'0')-(s[i]-'0'));
        }
        cout<<sum<<"\n";
    }


}