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
        int n;

        cin>>n;

        vector<int> arr(n+1,0);
        vector<int> t(n+1,0);

        for(int i=1;i<n;i++){
            cin>>t[i];
            arr[i] = arr[i-1]+t[i];
        }

        //initial

        int time=0,A=0,B=0;
        int rem;

        time = arr[1];
        A = arr[1];

        for(int i=1;i<n;i++){
            if(A>=arr[i]){
                A += t[i];
                time += t[i];
            }else{
                rem = arr[i]-A;
                time += rem;

                A += rem;

                time += t[i];
                A += t[i];
            }
        }

        cout<<time<<"\n";
    }
}