#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n%2==0 || n%7==0){
            cout<<"YES"<<"\n";
            continue;
        }

        if(n>7 && (n-7)%2==0){
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
    }
}