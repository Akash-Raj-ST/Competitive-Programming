#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

ll fn(ll i){
    return 2*i+2*i+i*i;
}

ll fn2(ll i){
    return (2*i+2*(i+1)+(i+1)*i)-(2*i+2*i+i*i);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        ll value,diff;
        bool found = false;

        for(ll i=1;i<100000;i++){
            value = fn(i);
            diff = fn2(i);

            if(value>n){
                break;
            }

            if((n-value)%diff==0){
                found=true;
                break;
            }

        }
        if(found) cout<<"Yes";
        else cout<<"No";
        cout<<"\n";
    }
}