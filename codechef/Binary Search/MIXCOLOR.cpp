#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    long int t;
    cin>>t;

    while(t--){
        long int n,num;
        cin>>n;

        set<int> st;

        for(long int i=0;i<n;i++){
            cin>>num;
            st.insert(num);
        }

        cout<<n-st.size()<<"\n";
    }
}