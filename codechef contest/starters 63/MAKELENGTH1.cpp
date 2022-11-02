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
        int n;
        cin>>n;

        string s;
        cin>>s;

        if(n==1){
            cout<<"YES\n";
            continue;
        }
        
        bool flag = true;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(i==n-1 || s[i+1]!='1'){
                    flag=false;
                    break;
                }
                i++;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}