// https://www.codechef.com/submit/SUMPOWER

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll m=1e9+7;

ll min_value(ll a,ll b,ll c){
    if(a<b){
        if(a<c){
            return a;
        }
        return c;
    }

    if(b<c) return b;
    return c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,k,i;
        cin>>n>>k;

        string s;
        cin>>s;

        char prev = s[0];
        ll sum = 0;
        for(i=1;i<n;i++){
            if(s[i]!=prev){
                if(i<k){
                    sum += min(i,n-(i+1)); 
                }else{
                    sum += min(k,n-i);
                }
            }
            prev = s[i];
        }

        cout<<sum<<'\n';
    }
}