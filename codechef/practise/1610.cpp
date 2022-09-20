#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int g=0,r=0;
        int prev = s[s.length()-1];

        for(int i=0;i<s.length();i++){
            if(s[i]==prev){
                if(s[i]=='R') r++;
                else g++;
            }
            prev = s[i];
        }

        if((r==1 and g==1) || (r==0 and g==0)) cout<<"yes";
        else cout<<"no";
        cout<<"\n";
    }
}