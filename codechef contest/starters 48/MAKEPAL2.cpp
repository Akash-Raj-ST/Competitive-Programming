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
        string s;

        cin>>n>>s;

        int one=0,zero=0;

        for(int i=0;i<n;i++){
            if(s[i]=='1') one++;
            else zero++;
        }

        if(one>zero){
            for(int i=0;i<one;i++) cout<<1;
        }else{
            for(int i=0;i<zero;i++) cout<<0;
        }
        cout<<"\n";
    }
}