#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll M=1e9+7;


bool left(int i,string s){
    if(i==0) return true;

    if(s[i-1]=='0') return true;
    return false;
}

bool right(int i,string s){
    if(i==s.length()-1) return true;

    if(s[i+1]=='0') return true;
    return false;
}

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

        int p=0;

        for(int i=0;i<n;i++){
            if(s[i]=='1') p++;
        }

        if(n%2==0){
            cout<<n/2-p<<'\n';
            continue;
        }else{
            bool found = false;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    if(i%2==0) cout<<(n/2+1)-p<<'\n';
                    else cout<<(n/2)-p<<'\n';
                    found = true;
                    break;
                }
            }

            if(!found){
                cout<<n/2+1<<'\n';
            }
        }

    }
}