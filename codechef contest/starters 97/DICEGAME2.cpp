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
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;

        int sum_a = a1+a2+a3;
        int sum_b = b1+b2+b3;

        sum_a -= min(a1,min(a2,a3));
        sum_b -= min(b1,min(b2,b3));

        if(sum_a==sum_b) cout<<"Tie";
        else if(sum_a>sum_b) cout<<"Alice";
        else cout<<"Bob";
        cout<<'\n';
    }
}