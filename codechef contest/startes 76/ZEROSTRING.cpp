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
        int n;
        cin>>n;

        string s;
        cin>>s;

        int one=0,zero=0;

        for(int i=0;i<n;i++){
            if(s[i]=='1') one++;
            else zero++;
        }

        if(one==zero) cout<<one;
        else if(one>zero) cout<<zero+1;
        else cout<<one;

        cout<<'\n';
    }
}