#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;

        if(p%a==0 && q%b==0){

            int diff = abs(p/a-q/b);
            
            if(diff<2) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";

        }else cout<<"NO"<<"\n";
    }
}