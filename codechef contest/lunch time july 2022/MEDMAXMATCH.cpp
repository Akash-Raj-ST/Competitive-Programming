#include <iostream>
#include <algorithm>
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

        vector<int> A(n);
        vector<int> B(n);

        for(int i=0;i<n;i++) cin>>A[i];
        for(int i=0;i<n;i++) cin>>B[i];

        if(n==1){
            cout<<A[0]+B[0]<<"\n";
            continue;
        }

        sort(A.begin(),A.end());
        sort(B.begin(),B.end());

        vector<int> ans(n);

        for(int i=0;i<n/2;i++) ans[i] = A[i]+B[i];

        int v = n;
        for(int i=n/2;i<n;i++){
            v--;
            ans[i] = A[i] + B[v];
        }

        sort(ans.begin(),ans.end());
        cout<<ans[n/2]<<"\n";

    }
}