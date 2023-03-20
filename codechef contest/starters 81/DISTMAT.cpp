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

        if(n==2) cout<<"-1\n";

        else{

            vector<vector<int>> arr(n,vector<int>(n,0));

            for(int i=0;i<n;i++) arr[i][i] = 1;

            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                    arr[i][j] = 1;
                }
            }

            arr[1][0] = 0;

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                   cout<<arr[i][j];
                }
                cout<<"\n";
            }
        }
    }
}