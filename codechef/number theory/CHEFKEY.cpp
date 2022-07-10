#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,m,c,factor;
        cin>>n>>m>>c;
        
        int count=0;
        for(int i=1;i<=n;i++){
            if(c%i==0 && c/i<=m){
                count++;
            }
        }
        cout<<count<<"\n";
    }
}