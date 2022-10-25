// https://www.codechef.com/submit/ARRROT

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

const ll m = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll n;
    cin>>n;

    ll sum = 0,num;

    for(int i=0;i<n;i++){
        cin>>num;
        sum += num;
    }

    sum = (sum%m+m)%m;

    ll q;
    cin>>q;

    while(q--){
        cin>>num;
        sum = (2*sum)%m;
        cout<<sum<<"\n";
    }
    
}