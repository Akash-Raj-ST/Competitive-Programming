#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

const ll M=1e9+7;
const ll SIZE = 3e4;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll n,m,q;
    cin>>n>>m>>q;

    ll sum_col = (n*(n+1))/2;

    while(q--){
        ll query,p=1,k;
        
        cin>>query;

        map<ll,ll> mp;
        ll common = 0;

        bool _init = false;

        while(query>=0){
            

            if(query>=sum_col){
                common++;
                query -= sum_col;

                if(!_init){
                    for(ll i=1;i<=n;i++){
                        mp[i] = 0;
                    }
                    _init = true;
                }
            }else{
                if(query>0){

                    if(query<=n){
                        if(!_init) p = query;
                        mp[query]++;
                    }
                    else{
                        
                        if(!_init){
                            for(ll i=1;i<=n;i++){
                                if(i<=query){
                                    mp[i]++;
                                    query -= i;
                                }else{
                                    break;
                                }
                            }
                        }
                        else{
                            for(ll i=n;i>0 && query>0;i--){
                                if(i<=query){
                                    mp[i]++;
                                    query -= i;
                                }
                            }
                        }
                        

                        if(query!=0){
                            mp[query]++;
                        }
                    }
                }

                cout<<p<<' '<<mp.size()<<'\n';

                for(auto it:mp){ 
                    cout<<it.second+common<<' ';
                }

                cout<<'\n';
                break;
            }
        }
    }
}