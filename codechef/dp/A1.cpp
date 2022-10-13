#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

bool solve(int n,vector<int> arr,int req_sum,int sum,int i){
    if(sum==req_sum) return true;

    if(i<n) if(solve(n,arr,req_sum,sum+arr[i],i+1)) return true;
    if(i<n) if(solve(n,arr,req_sum,sum,i+1)) return true;

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,req_sum;
        cin>>n>>req_sum;

        vector<int> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        if(solve(n,arr,req_sum,0,0)){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
    }
}