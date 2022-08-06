#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]>arr[i][k]+arr[k][j])
                    arr[i][j] = arr[i][k]+arr[k][j];
            }
        }
    }

    int m;
    cin>>m;
    int source,gas,dest;
    int direct,indirect;
    while(m--){
        cin>>source>>gas>>dest;
        direct = arr[source][dest];
        indirect = arr[source][gas]+arr[gas][dest];
        cout<<indirect<<" "<<indirect-direct<<"\n";
    }
}