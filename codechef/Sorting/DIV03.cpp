#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[10];

        for(int i=0;i<10;i++) cin>>arr[i];

        int k,ans=0;
        cin>>k;

        for(int i=9;i>=0;i--){
            if(arr[i]>k){
                ans=i+1;
                break;
            }else{
                k -= arr[i];
            }
        }
        cout<<ans<<endl;
    }
}