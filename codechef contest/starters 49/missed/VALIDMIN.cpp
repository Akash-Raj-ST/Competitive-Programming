#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int temp;
        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }
        if(b>c){
            temp = b;
            b = c;
            c = temp;
        }
        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }

        if(a==b ) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}