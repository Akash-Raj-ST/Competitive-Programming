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
        string s1,s2;
        cin>>s1>>s2;

        string ans = "";

        for(int i=0;i<s1.length();i++){
            if(s1[i]=='B' && s2[i]=='B') ans+='W';
            else ans+='B';
        }

        cout<<ans<<"\n";
    }
}