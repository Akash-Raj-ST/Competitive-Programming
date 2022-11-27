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
        int n,a,b,large;
        string s;

        cin>>n>>a>>b>>s;

        int v1 = (a+b)*n;

        int ones=0,zeros=0;

        for(int i=0;i<n;i++){
            if(s[i]=='1') ones++;
            else zeros++;
        }

        int v2 = 0;

        
        int zero_count = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='0') zero_count++;
            else if(zero_count>0){
                v2 += zero_count*a+b;
                zero_count = 0;
            }
        }

        v2 += a*ones+b;

        if(v2>v1) large=v2;
        else large=v1;

        v2=0;
        int one_count = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='1') one_count++;
            else if(one_count>0){
                v2 += one_count*a+b;
                one_count = 0;
            }
        }

        v2 += a*zeros+b;
        
        
        int ans = large>v2?large:v2;
        cout<<ans<<"\n";

    }
}