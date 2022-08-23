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
        float n,t;
        cin>>n>>t;

        vector<float> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        float diff,req,max=0;

        //intital
        diff = arr[1] - arr[0]; 
        req = t-diff;

        if(arr[0]>=(req/2)){
            arr[0] -= req/2;
            arr[1] += req/2;
            if(req/2>max) max = req/2;
        }else{
            req -= arr[0];
            arr[0] = 0;
            arr[1] += req;

            if(req>max) max = req;
        }

        int prev=arr[1];
        for(int i=2;i<n-1;i++){
            diff = arr[i+1] - arr[i]; 
            req = t-diff;

            if(arr[i]-prev >= (req/2)){
                arr[i] -= req/2;
                arr[i+1] += req/2;

                if(req/2>max) max = req/2;
            }else{
                req -= arr[i];
                arr[i] = 0;
                arr[i+1] += req;

                if(req>max) max = req;
            }
        }
    
    }
}
