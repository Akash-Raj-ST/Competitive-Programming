// https://www.codechef.com/submit/CHARGES

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll m=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        ll dist = 0,i;
        char prev = s[0];

        for(i=1;i<n;i++){
            if(s[i]==prev) dist += 2;
            else dist += 1;

            prev = s[i];
        }

        ll pos;

        while(k--){
            cin>>pos;
            pos--;
            
            if(pos>0){
                if(s[pos]==s[pos-1])    
                    dist--;
                else 
                    dist++;
            }

            if(pos<n-1){
                if(s[pos]==s[pos+1])    
                    dist--;
                else 
                    dist++;
            }

            s[pos] = s[pos]=='0'?'1':'0';
            
            cout<<dist<<"\n";
        }
    }
}