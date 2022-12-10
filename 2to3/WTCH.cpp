#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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
        int n;
        cin>>n;

        string s;
        cin>>s;

        s = "0"+s+"0";
        int ans=0;
        for(int i=1;i<=n;i++){
            if(s[i]=='0' && s[i-1]=='0' && s[i+1]=='0'){
                s[i] = '1';
                ans++;
            }
        }
        cout<<ans<<'\n';
    }   
}