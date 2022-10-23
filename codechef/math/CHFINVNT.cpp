// https://www.codechef.com/submit/CHFINVNT

#include <iostream>
#include <vector>
#include <map>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,p,k,i;
        cin>>n>>p>>k;

        ll no_of_sections = n/k;
        ll x = p%k;
        ll ans = x*no_of_sections;
        ans += min(p%k,n%k); //for incomplete section
        ans += p/k+1; //for numbers equal to p but present in sections less than that

        cout<<ans<<"\n";
    }
}