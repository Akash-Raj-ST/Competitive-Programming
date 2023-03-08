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

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        string s;
        cin>>s;

        ll count = 0;

        for(ll i=0;i<n;i++){
            if(s[i]=='0') count++;
        }    

        char prev='!';
        ll net = 0;

        for(ll i=0;i<n;i++){
            if(s[i]=='-'){
                if(prev=='-' || prev=='!'){
                    count -= net;
                }else{
                    if(net>0){
                        if(net%2==1) count = count-(net-1);
                        else count = count-net;
                    }
                }

                net = 0;
                prev = '-';
            }
            else if(s[i]=='+'){
                if(prev=='+' || prev=='!'){
                    count -= net;
                }else{
                    if(net>0){
                        if(net%2==1) count = count-(net-1);
                        else count = count-net;
                    }
                }
                net = 0;
                prev = '+';
            }
            else{
                net++;
            }
        }


        if(prev!='!'){
            count -= net;
        }

        cout<<count<<'\n';
    }
}