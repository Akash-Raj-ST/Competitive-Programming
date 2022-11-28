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
        int n;
        cin>>n;

        if(n==1){
            cout<<3<<'\n';
            continue;
        }

        for(int i=0;i<n-2;i++) cout<<3;

        if(n%3==0) cout<<21;
        else cout<<33;

        cout<<'\n';
    }
}