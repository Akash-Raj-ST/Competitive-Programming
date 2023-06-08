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

        bool is_alice_server = true;
        int alice=0,bob=0;

        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                if(is_alice_server){
                    alice++;
                }else{
                    is_alice_server = true;
                }
            }else{
                if(is_alice_server){
                    is_alice_server = false;
                }else{
                    bob++;
                }
            }
        }

        cout<<alice<<' '<<bob<<'\n';
    }
}