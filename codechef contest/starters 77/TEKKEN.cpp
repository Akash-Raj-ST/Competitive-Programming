#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

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
        int a,b,c;
        cin>>a>>b>>c;

        bool win = false;

        if(b>c){
            b -= c;

            if(a>b)
                win = true;
          
        }else{
            c -= b;
            if(a>c)
                win = true;
        }

        if(win) cout<<"YES\n";
        else cout<<"NO\n";
    }
}