// https://www.codechef.com/submit/PANSTACK


#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

const ll m = 1e9+7;

vector<ll> arr(10001,-1);

ll fact(ll n){
    if(n==2) return 2;
    if(n==1 || n==0) return 1;

    if(arr[n]==-1) arr[n] = (n*(fact(n-1)%m)%m);  
      
    return arr[n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        cout<<fact(n)<<"\n";
    }
}