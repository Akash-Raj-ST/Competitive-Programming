#include <iostream>
#include <vector>
#define ll long long int
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

        vector<vector<int>> arr(n,vector<int>(m,0));

        int x1,y1,x2,y2;

        cin>>x1>>y1;
        x1--;
        y1--;
        arr[x1][y1] = 1;

        cin>>x2>>y2;
        x2--;
        y2--;
        arr[x2][y2] = 2;


        if((x1+y1)%2==(x2+y2)%2){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(arr[i][j]==0){
                        if((i+j)%2==(x1+y1)%2){
                            arr[i][j]=1;
                        }else{
                            arr[i][j]=3;
                        }
                    }
                }
            }
        }else{
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if((i+j)%2==(x1+y1)%2){
                        arr[i][j]=1;
                    }else{
                        arr[i][j]=2;
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}