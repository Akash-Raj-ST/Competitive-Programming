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

    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        string ans;

        if((x>n+1) || (x<(-1*n+1))){
            cout<<-1<<'\n';
            continue;
        }  

        x--;

        int count = x;
        if(x>0){
            for(int i=0;i<count;i++){
                ans += '+';
            }

            count = n-count;

            for(int i=0;i<count;i++){
                ans += '*';
            }
        }else{
            count = -1*count;
            for(int i=0;i<count;i++){
                ans += '-';
            }

            count = n-count;

            for(int i=0;i<count;i++){
                ans += '*';
            }
        }  

        cout<<ans<<'\n';
    }
}