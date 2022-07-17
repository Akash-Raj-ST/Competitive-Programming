#include <iostream>
#include <vector>
#include <algorithm>
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
        vector<int> arr;
        
        int zero = 0,num;
        for(int i=0;i<n;i++){
            cin>>num;
            if(num==0) zero++;
            else arr.push_back(num);
        }

        sort(arr.begin(),arr.end());

        while(zero--) arr.push_back(0);

        int count=0,i=0;
        while(i<n){
            if(arr[i]==0){
                count+=1;
                break;
            }
            else if(i+arr[i]<n){
                count++;
                i=i+arr[i];
            }else i++;
        }
        cout<<count<<"\n";
    }
}