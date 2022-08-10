#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    long long int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n>>k;

        vector<long long int> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        vector<long long int> left(n),right(n);

        long long int count;
        //left side
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<i;j++){
                if(arr[j]<arr[i]) count++;
            }
            left[i] = count;
        }


        //rigth side
        for(int i=0;i<n;i++){
            count=0;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[i]) count++;
            }
            right[i] = count;
        }

        long long int sum_r = (k*(k+1))/2;
        long long int sum_l = ((k-1)*(k))/2;

        long long int sum=0;

        for(int i=0;i<n;i++){
            sum += right[i]*sum_r;
            sum += left[i]*sum_l;
        }
        cout<<sum<<"\n";
    }
}