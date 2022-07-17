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
        string a,b;
        cin>>a>>b;

        bool poss = true;
        for(int i=0;i<n;i++){
            if(a[i]==b[i]) continue;

            if(i==n-1){
                if(a[i]!=a[i-1]) poss=false;
                break;
            }

            if(a[i]=='0'){
                if(a[i+1]=='0'){
                    if(!(i>0 && a[i-1]=='1')){
                        poss = false;
                        break;
                    }
                }
            }else{
                a[i+1]='0';
            }


        }

        if(!poss) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}