#include <iostream>
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

        int num;
        int start=-1,end=-1;

        for(int i=0;i<n;i++){
            cin>>num;
            if(num==1) start=i;
            else if(num==n) end=i;
        }

        int count=0;
        if(start==0 && end==n-1) cout<<0<<"\n";
        else if(start<end){
            count += start;
            count += n-1-end;
            cout<<count<<"\n";
        }else{
            cout<<start+(n-2-end)<<"\n";
        }

    }
}