// https://www.codechef.com/submit/LOKBIL

#include <iostream>
#include <vector>
#include <cstdio>
#include<iomanip>
#include <limits>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int num;
        char ch;

        vector<vector<int>> arr(n+1,vector<int>(n+1,n+1));

        //input method 1
        // for(int i=1;i<=n;i++){
        //     arr[i][i] = 0;
        //     while(true){
        //         scanf("%d%c",&num,&ch);
        //         arr[i][num] = 1;
        //         if(ch=='\n') break;
        //     }
        // }

        //input method 2
        for(int i=1;i<=n;i++){
            arr[i][i]=0;
            while(true){
                cin>>num;
                    
                arr[i][num]=1;
                    
                if(cin.peek() == '\n' || cin.peek() == EOF){
                    break;
                }
            }
        }

        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(arr[i][k]+arr[k][j]<arr[i][j]){
                        arr[i][j] = arr[i][k]+arr[k][j];
                    }
                }
            }
        }

        float min=INT32_MAX,sum;
        int min_index=-1;
        for(int i=1;i<=n;i++){
            sum=0;
            for(int j=1;j<=n;j++){
                sum += arr[i][j];
            }
            if(sum<min){
                min = sum;
                min_index = i;
            }
        }

        cout<<min_index<<" "<< fixed << setprecision(6)<<min/n<<"\n";
    }
}