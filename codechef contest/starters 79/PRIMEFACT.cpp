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
        int x,y;
        cin>>x>>y;

        vector<int> arr = {2,3,5,7};

        int val = -1,count=0;

        while(x<y){
            for(int i=0;i<arr.size();i++){
                if(x%arr[i]==0){
                    val = arr[i];
                    break;
                }
            }

            if(val == 2){
                int rem = y-x;
                count += (rem/2)+(rem%2);
                break;
            }else{
                count++;
                x += val;
            }
        }
        cout<<count<<'\n';
    }
}