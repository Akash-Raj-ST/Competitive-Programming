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
        int n,m,x,y;

        cin>>n>>m>>x>>y;

        if(n<=2 && m<=2){
            if(x%2==1 && y%2==1) cout<<"NO";
            else cout<<"YES"
        }else{
            cout<<"YES";
        }
    }
}