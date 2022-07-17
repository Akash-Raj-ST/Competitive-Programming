#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int A = a1+a2;
        int B = b1+b2;

        A<B?cout<<A:cout<<B;
        cout<<"\n";
    }
}