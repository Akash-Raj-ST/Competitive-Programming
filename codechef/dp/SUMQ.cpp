#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;
    ll mod = 1e9+7;
    while(t--){

        int p,q,r;
        cin>>p>>q>>r;

        vector<int> x(p);
        vector<int> y(q);
        vector<int> z(r);

        for(int i=0;i<p;i++) cin>>x[i];
        for(int i=0;i<q;i++) cin>>y[i];
        for(int i=0;i<r;i++) cin>>z[i];


        ll sum = 0,value;;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                for(int k=0;k<r;k++){
                    if(y[j]>=x[i] && y[j]>=z[k]){ 
                        value = (y[j]+x[i])*(y[j]+z[k]);
                        sum += (value%mod);
                    }
                }
            }
        }
        cout<<sum<<"\n";

    }
}