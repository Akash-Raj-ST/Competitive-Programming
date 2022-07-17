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

        bool found,pali;
        pali = true;
        char temp;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-i-1]) continue;
            found = false;
            for(int j=i+2;j<n-i-1;j+=2){
                if(s[n-i-1]==s[j]){
                    found=true;
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                    break;
                }
            }
            if(!found){
                pali = false;
                break;
            }
        }
        if(pali) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}