#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int time_taken(vector<int> arr,int n){
    int sum =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%n==0){
            sum += arr[i]/n;
        }else sum += (arr[i]/n)+1;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);

        int high = INT_MIN;
        for(int i=0;i<n;i++){ 
            cin>>arr[i];
            if(arr[i]>high) high = arr[i];
        }

        int low = 1,mid,ans=-1;

        while(low<=high){
            mid = (high+low)/2;

            if(time_taken(arr,mid)<=k){
                high = mid-1;
                ans = mid;
            }else{
                low = mid+1;
            }
        }

        cout<<ans<<"\n";
    }
}