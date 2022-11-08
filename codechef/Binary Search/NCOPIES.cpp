#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

//incomplete
// const ll m=1e9+7;

ll prefix(ll num,string s){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,m,i,j;
        cin>>n>>m;

        string s;
        cin>>s;

        vector<ll> pre(n*m+1),suf(n*m+1);

        ll ones = 0;

        for(i=0;i<n;i++){
            if(s[i]=='1') ones++;
        }

        ones *= m;

        if(ones%2!=0){
            cout<<0<<'\n';
        }

        //prefix==ones/2;
        ll start=0,end=n*m,mid;
        ll value = ones/2;

        while(start<=end){
            mid = (start+end)/2;

            if(prefix(mid,s)==value){
                if(s[mid%m]=='0')
            }
        }
        

        // suffix;
        suf[n*m-1] = 0;

        for(i=m-1;i>=0;i--){
            for(j=n-1;j>=0;j--){
                if(i==m-1 && j==n-1) continue;

                if(s[(j+1)%n]=='1') suf[(i*n)+j]=suf[(i*n)+j+1]+1;
                else suf[(i*n)+j]=suf[(i*n)+j+1];
            }
        }

        ll count=0;
        for(i=0;i<n*m;i++){
            if(pre[i]==suf[i]) count++;
        }

        cout<<count<<"\n";
    }
}