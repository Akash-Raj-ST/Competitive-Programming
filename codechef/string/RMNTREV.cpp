// https://www.codechef.com/submit/RMNTREV

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

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        string ori;

        int start=0,end=k-1;

        for(int i=0;i<k;i++){
            if(i&1) ori += s[end--];
            else ori += s[start++];
        }

        for(int i=k-1;i>=0;i--) cout<<ori[i];
        
        cout<<s.substr(k,n-k)<<"\n";
    }
}