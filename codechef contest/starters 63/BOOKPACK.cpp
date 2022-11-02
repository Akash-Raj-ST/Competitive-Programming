#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll m=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int x,y,z;
        cin>>x>>y>>z;

        int rem = min(1,y%z);

        cout<<x*((y/z)+rem)<<"\n";
    }
}