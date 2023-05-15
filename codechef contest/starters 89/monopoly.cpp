// https://www.codechef.com/problems/MONOPOLY2


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
        int sum = 0,max=0,num;
        
        for(int i=0;i<4;i++){
            cin>>num;

            if(num>max) max=num;
            sum += num;
        }

        sum -= max;

        if(max>sum) cout<<"YES\n";
        else cout<<"NO\n";
    }
}