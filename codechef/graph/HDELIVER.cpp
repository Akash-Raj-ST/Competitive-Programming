#include <iostream>
#include <vector>
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

        vector<vector<int>> arr(n,vector<int>(n,0));

        for(int i=0;i<n;i++) arr[i][i]=1;

        int a,b;
        while(m--){
            cin>>a>>b;

            arr[a][b]=1;
            arr[b][a]=1;
        }

        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(arr[i][j]==0){
                        if(arr[i][k]==1 && arr[k][j]==1){ 
                            arr[i][j]=1;
                            arr[j][i]=1;
                        }
                    }
                }
            }
        }
     
        int q;
        cin>>q;
        while(q--){
            cin>>a>>b;
            if(arr[a][b]==1) cout<<"YO"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
}