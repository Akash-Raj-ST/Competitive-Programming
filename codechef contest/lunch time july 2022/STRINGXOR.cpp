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

        bool a_1=false;
        
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                a_1 = true;
                break;
            }
        }

        bool con = false;
        char prev = b[0];
        for(int i=1;i<n;i++){
            if(b[i]==prev){
                con=true;
                break;
            }
            prev=b[i];
        }

        
        if(a_1){
            if(con || a==b) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }else{
            if(a==b) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
}