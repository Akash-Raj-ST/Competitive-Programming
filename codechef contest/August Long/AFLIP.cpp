#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;

    while(t--){
        ll n,m;
        cin>>n>>m;

        vector<vector<ll>> arr(n,vector<ll>(m));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        vector<vector<ll>> arr2(n,vector<ll>(m));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>arr2[i][j];
            }
        }

        bool found;
        int val;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                found=false;
                val = (i+j)%2;
                for(ll i2=0;i2<n;i2++){
                    for(ll j2=0;j2<m;j2++){
                        if(val==(i2+j2)%2){
                            if(arr[i][j]==arr2[i2][j2]){
                                found=true;
                                arr2[i2][j2]=-1;
                                break;
                            }
                        }
                    }
                    if(found) break;
                }
                if(!found) break;
            }
            if(!found) break;
        }

        if(!found) cout<<"NO";
        else cout<<"YES";
        cout<<"\n";

    }
}