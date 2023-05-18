#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <bit>
#include <bit>
#include <bitset>
#include <cstdint>
#include <cmath>

#define ll long long int
using namespace std;

const ll M=1e9+7;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n1,n2;
        cin>>n1>>n2;

        if(n1==n2){
            cout<<"YES\n";
            continue;
        }
        
        if(n2>n1 || n1%2==1){
            cout<<"NO\n";
            continue;
        }

        while(n1%2==0){
            n1 = n1/2;
        }

        if(n2%n1==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}