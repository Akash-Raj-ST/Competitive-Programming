#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

const ll M=1e9+7;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        
        string s;
        cin>>s;

        if(n%3==1){
            cout<<"YES\n";
            continue;
        }   

        bool found = false;
        for(int i=0;i<26;i++){

            int left=n,right=-1;
            for(int j=0;j<n;j++){
                if(s[j]-'a'==i && j%3==0){
                    left = j;
                    break;
                }
            }

            for(int j=n-1;j>=0;j--){
                if(s[j]-'a'==i && (n-j-1)%3==0){
                    right = j;
                    break;
                }
            }

            if(left<=right){
                found = true;
                break;
            }
        }


        if(found) cout<<"YES\n";
        else cout<<"NO\n";

    }
}