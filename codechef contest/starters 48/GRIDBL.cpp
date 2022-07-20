#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        if((n%2)==1 && (m%2)==1) cout<<(n+m)-1<<"\n";
        else cout<<(n%2)*m+(m%2)*n<<"\n";
    }
}