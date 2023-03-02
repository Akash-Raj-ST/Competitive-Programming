#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <math.h>

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
        ll n;
        cin>>n;

        switch (n)
        {
        case 0:
            cout<<"3 1 6 7"<<'\n';
            break;
            
        case 1:
            cout<<"1 4 3 2"<<'\n';
            break;

        case 2:
            cout<<"2 4 3 1"<<'\n';
            break;
        
        case 3:
            cout<<"8 3 2 1"<<'\n';
            break;
        
        default:
            cout<<1<<' '<<2<<' '<<3<<' '<<(n^3)<<'\n';
            break;
        }
    }
}