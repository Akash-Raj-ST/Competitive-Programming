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
        int a,b;
        cin>>a>>b;

        int val1 = 100-a;
        int val2 = 200-(2*b);

        if(val1==val2) cout<<"BOTH\n";
        else if(val1>val2) cout<<"SECOND\n";
        else cout<<"FIRST\n";
    }
}