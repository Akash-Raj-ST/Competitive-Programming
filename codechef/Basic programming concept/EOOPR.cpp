// https://www.codechef.com/submit/EOOPR

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

    while(t--){
        ll x,y;
        cin>>x>>y;

        ll diff = abs(x-y);

        if(x==y){
            cout<<0;
        }
        else if(x<y){
            if(diff%2==1){
                cout<<1;
            }else{
                if((y-x)/2%2==0) cout<<3;
                else cout<<2;
            }
        }else{
            if(diff%2==0){
                cout<<1;
            }else{
                cout<<2;
            }
        }
        cout<<"\n";
    }
}