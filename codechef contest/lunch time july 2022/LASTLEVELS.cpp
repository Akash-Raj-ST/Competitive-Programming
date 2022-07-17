#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,t,br;
        cin>>n>>t>>br;

        if(n%3!=0) cout<<(n*t)+(n/3)*br<<"\n";
        else cout<<(n*t)+(n/3-1)*br<<"\n";
    }
}