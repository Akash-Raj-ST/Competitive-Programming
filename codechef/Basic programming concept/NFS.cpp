#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int u,v,a,s;
        cin>>u>>v>>a>>s;

        float velocity = sqrt(u*u-2*a*s);
        if(velocity>v) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}