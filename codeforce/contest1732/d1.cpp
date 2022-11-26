#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>
#define ll long long int
using namespace std;


const ll m=1e18;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;
    vector<ll> arr(10000000,-1);

    while(t--){
        char ch;
        cin>>ch;

        if(ch=='\n') cin>>ch;

        ll num;
        cin>>num;

        if(ch=='+'){
            arr[num] = 1;
        }else{
            ll c=1;
            while(true){
                if(arr[num*c]==-1){
                    cout<<num*c<<"\n";
                    break;
                }

                c++;
            }
        }
    }
}