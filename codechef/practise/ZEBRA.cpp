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
        int n,k;
        string s;

        cin>>n>>k>>s;

        int max_jump = 0;

        int prev = s[0];

        int max_one,max_zero;
        if(s[0]=='1') max_one = 1;
        else max_zero = 1;

        for(int i=1;i<n;i++){
            if(s[i]!=prev) max_jump++;
            prev = s[i];

            if(s[i]=='1') max_one = i+1;
            else max_zero = i+1;
        }

        if(k>max_jump){ 
            cout<<-1<<"\n";
            continue;
        }

        int ans = -1;
        if(k%2==0){
            if(s[0]=='1') ans=max_one;
            else ans = max_zero;
        }else{
            if(s[0]=='0') ans=max_one;
            else ans = max_zero;
        }

        cout<<ans<<"\n";
    }
}