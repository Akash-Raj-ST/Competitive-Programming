#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        long int n,a,b,k;

        cin>>n>>a>>b>>k;

        long int count=n/a+n/b;

        if(max(a,b)%min(a,b)==0) count = n/min(a,b)-n/max(a,b);
        else count -= n/(a*b);

        if(count>=k && a!=b) cout<<"Win";
        else cout<<"Lose";
        cout<<"\n";
    }
}