#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<pair<int,int>> arr(m);
        int a,b;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            arr[i] = {a,b};
        }

        int diff;

        int min = INT_MAX;
        for(int i=0;i<n;i++){
            diff = arr[i].second-arr[i].first;
            if(diff<min) min = diff;
        }
        cout<<min<<"\n";
    }
}