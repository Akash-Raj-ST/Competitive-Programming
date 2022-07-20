#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,req,red,blue;
        cin>>n>>req>>red>>blue;

        if(red<=blue) cout<<n*red<<"\n";
        else{
            int rem = n-req;
            int amt = rem*blue+req*red;
            cout<<amt<<"\n";
        }
    }
}