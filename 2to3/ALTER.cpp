#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll M=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;

        int r1 = p/a;
        int r2 = q/b;

        if(p%a==0 && q%b==0){
            if(abs(r1-r2)<2) cout<<"yes";
            else cout<<"no";
        }else{
            cout<<"no";
        }
        cout<<'\n';
    }
}