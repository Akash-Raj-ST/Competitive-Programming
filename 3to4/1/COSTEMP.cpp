#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;


const ll M=1e9+7;

void print(vector<vector<int>> arr,int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<' ';
    }
    cout<<'\n';
  }
}

int main(){
     #ifndef ONLINE_JUDGE
       freopen("../../input.txt","r",stdin); 
       freopen("../../output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);


    	int n;
      cin>>n;

      vector<vector<int>> arr(n+1,vector<int>(n+1,-1));

      int a,b;
      for(int i=0;i<n-1;i++){
        cin>>a>>b;
        arr[a][b] = 1;
        arr[b][a] = 1;
        arr[a][a] = 0;
        arr[b][b] = 0;
      }

      for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            if(arr[i][k]!=-1 && arr[k][j]!=-1){
              if(arr[i][j]==-1 || arr[i][k]+arr[k][j]<arr[i][j]){
                arr[i][j] = arr[i][k]+arr[k][j];
              }
            }
          }
        }
      }

      for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
          sum += arr[i][j];
        }
        cout<<sum<<' ';
      }
    }
