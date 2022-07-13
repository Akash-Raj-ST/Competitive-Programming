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
        string s;
        cin>>s;

        bool valid=true;
        if(n%2==0){
            int j=n/2;
            for(int i=0;i<n/2;i++){
                if(s[i]!=s[j]){
                    valid = false;
                    break;
                }
                j++;
            }

        }else{
            int j=(n-1)/2;
            for(int i=0;i<(n-1)/2;i++){
                if(s[i]!=s[j]){
                    valid = false;
                    break;
                }
                j++;
            }
        }

        if(valid) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}