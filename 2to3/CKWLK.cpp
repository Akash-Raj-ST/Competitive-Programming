#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll M=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        int zeros = 0;

        while(n%10==0){
            n = n/10;
            zeros++;
        }

        int power = 0;

        while(n%2==0){
            n = n/2;
            power++;
        }

        if(n==1 && zeros>= power) cout<<"Yes";
        else cout<<"No";
        cout<<'\n';
    }
}