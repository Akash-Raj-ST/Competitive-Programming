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

        int ans = 0,a=0,b=0;
        string s;

        while(n--){
            cin>>s;

            if(s=="A") a++;
            else if(s=="B") b++;
            else ans++;
        }

        ans += max(a,b);
        cout<<ans<<'\n';
    }
}