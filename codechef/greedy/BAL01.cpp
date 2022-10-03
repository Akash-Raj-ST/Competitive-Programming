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
        int n;
        cin>>n;


        string s;
        cin>>s;

        int ones=0,zeros=0,ques=0;;

        for(int i=0;i<n;i++){
            if(s[i]=='1') ones++;
            else if(s[i]=='0') zeros++;
            else ques++;
        }

        string ans;
        int diff = abs(ones-zeros);
        char replace='0';

        if(ones>zeros){
            replace = '0';
        }else if(zeros>ones){
            replace = '1';
        }

        int i=0;
        while(ques>0 && diff>0 && i<n){
            if(s[i]=='?'){
                ans += replace;

                ques--;
                diff--;
            }else{
                ans += s[i];
            }
            i++;
        }

        char curr = '0';
        for(;i<n;i++){
            if(s[i]=='?'){
                ques--;
                ans += curr;

                if(curr=='1') curr='0';
                else curr='1';
            }else ans+=s[i];
        }

        cout<<ans<<"\n";
    }
}