// https://www.codechef.com/submit/ROWSOLD

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
        string s;
        cin>>s;

        ll n = s.length();

        ll total = 0,count=0;
        ll c = n;

        bool flag = false;

        for(ll i=n-1;i>=0;i--){
            if(s[i]=='1'){
                total += c-(i+1);
                c--;

                if(!flag) total += count;
                else{
                    flag=false;
                    count++;
                    total += count;
                }
            }else{
                flag=true;
            }
        }

        cout<<total<<"\n";
    }
}