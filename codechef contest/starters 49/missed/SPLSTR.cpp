#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        string s;

        cin>>n>>k>>s;

        int one=0,zero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') one++;
            else zero++;
        }
      
        if(one>zero){
            if((one-zero)%k==0)
                cout<<(one-zero)/k;
            else
                cout<<(one-zero)/k+1;
        }else{
             if((zero-one)%k==0)
                cout<<(zero-one)/k;
            else
                cout<<(zero-one)/k+1;
        }
        cout<<"\n";
    }
}