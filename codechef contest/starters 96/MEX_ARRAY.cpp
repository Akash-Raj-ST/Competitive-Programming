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

        vector<int> arr(2e5+1,0);

        int ele,max=-1;
        for(int i=0;i<n;i++){
            cin>>ele;
            arr[ele]++;

            if(ele>max) max=ele;
        }

        int chosen = 0;

        vector<int> ans;
        while(chosen<n){
            if(arr[0]==0){
                for(int i=chosen;i<n;i++){
                    ans.push_back(0);
                }
                break;
            }

            for(int i=0;i<=max+1;i++){
                if(arr[i]==0){
                    ans.push_back(i);
                    break;
                }else{
                    arr[i]--;
                    chosen++;
                }
            }
        }

        cout<<ans.size()<<'\n';
        for(auto it:ans) cout<<it<<' ';
        cout<<'\n';

    }
}