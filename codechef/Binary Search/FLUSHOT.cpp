#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;
    cout<<fixed<<setprecision(3);
    while(t--){
        float n,d;
        cin>>n>>d;

        vector<float> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        float ans = 0;        
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>=d) continue;

            float move_back=0,moved=0;

            if(i==0){
                move_back=arr[i];
            }
            else if(arr[i-1]<arr[i]){
                move_back = arr[i]-arr[i-1]-d;
                if(move_back<0) move_back=0;
            }

            float req = d - (arr[i+1]-arr[i]);
            if(move_back==0){
                arr[i+1] = arr[i+1]+req;
                moved = req;
            }else{
                if(move_back>=(req/2)){
                    arr[i] = arr[i]-move_back/2;
                    arr[i+1] = arr[i+1]+move_back/2;
                    moved = move_back/2;
                }else{
                    arr[i] = arr[i]-move_back;
                    arr[i+1] = arr[i+1]+(req-move_back);
                    moved = req-move_back;
                }
            }

            if(moved>ans) ans=moved;
        }  
        cout<<ans<<"\n";
    }
}
