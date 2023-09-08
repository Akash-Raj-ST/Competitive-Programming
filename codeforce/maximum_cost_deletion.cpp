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
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        string s;
        cin>>s;

        int ans = a*n;

        if(b>=0){
            ans += b*n;
            cout<<ans<<'\n';
            continue;
        }

        int sections=1;
        char prev = s[0];

        for(int i=1;i<n;i++){
            if(prev==s[i]){
                continue;
            }

            sections++;
            prev = s[i];
        }

        ans += ((sections/2)+1)*b;

        cout<<ans<<'\n';
    }
}