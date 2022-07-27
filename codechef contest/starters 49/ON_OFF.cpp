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
        string s,r;

        cin>>n>>s>>r;

        int state=1;
        for(int i=0;i<n;i++){
            if(s[i]!=r[i]) state=!state;
        }
        cout<<state<<"\n";
    }
}