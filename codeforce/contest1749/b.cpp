#include <iostream>
#include <vector>
#include <map>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,h;
        cin>>n;

        vector<ll> spell(n);

        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>h;
            sum += h;
        }

        ll max = -1;
        for(int i=0;i<n;i++){
            cin>>h;
            if(h>max) max = h;

            sum+=h;
        }

        sum -= max;
        cout<<sum<<"\n";
    }
}