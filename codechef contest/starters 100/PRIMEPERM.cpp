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
        int n;
        cin>>n;

        if(n<4){
            cout<<"-1\n";
            continue;
        }

        int pos = 4;
        if(n%4==1){
            cout<<"4 5 1 2 3 ";
            pos = 9;
        }
        else if(n%4==2){
            cout<<"4 5 6 1 2 3 ";
            pos = 10;
        }
        else if(n%4==3){
            cout<<"3 4 5 6 7 1 2 ";
            pos = 11;
        }

        for(int i=pos;i<=n;i+=4){
            cout<<i-1<<' '<<i<<' '<<i-3<<' '<<i-2<<' ';
        }

        cout<<'\n';
    }
}